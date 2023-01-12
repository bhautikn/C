//text-editor version 1.0

#include<stdio.h>
#include<termios.h>
#include<sys/ioctl.h>
#include<stdlib.h>
#include<string.h>

static struct termios old, new;
int height,width,temp=0,save=1;
char name[20];
int line_width[1000],currunt_line=1;

void initTermios(int echo)
{
    tcgetattr(0, &old);
    new = old;
    new.c_lflag &= ~ICANON;
    new.c_lflag &= echo ? ECHO : ~ECHO;
    tcsetattr(0, TCSANOW, &new);
}

void resetTermios(void)
{
    tcsetattr(0, TCSANOW, &old);
}

char getch_(int echo)
{
    char ch;
    initTermios(echo);
    ch = getchar();
    resetTermios();
    return ch;
}

char getch(void)
{
    return getch_(0);
}

char getche(void)
{
    return getch_(1);
}

void gotoxy(int x, int y)
{
    printf("%c[%d;%df", 0x1B, y, x);
}

int screen_size(int *he,int *wi){
    int height,width;
    struct winsize w;
    ioctl(0,TIOCGWINSZ,&w);
    *he=w.ws_row;
    *wi=w.ws_col;
}

void clear_last_line(){
	for (int j = 0; j<width-2; ++j)
	{
		gotoxy(j,height-1);
		printf(" ");
	}
}

void save_file(char fname[],char file[]){
	FILE *f;
	f=fopen(fname,"w");
	for (int k = 0; file[k]!='\0'; ++k)
	{
		putc(file[k],f);
	}
	clear_last_line();
	gotoxy(0,height-1);
	printf("file is saved...");
	save=1;
	gotoxy(width-1,height-1);
	printf(" ");
	gotoxy(line_width[currunt_line]+4,currunt_line);
	fclose(f);
}

//start main funtion

int main(int argc, char *argv[]){
	int i=0,j=0,k=0,t=0;
	char ch,c,file[200000];
	FILE *f;
	system("stty stop ^U");
	system("clear");
	screen_size(&height,&width);
	printf("\033[0;35m");
	for (int i=0;i<=height-2; ++i)
	{
		gotoxy(0,i);
		printf("%2d", i);
		line_width[i]=0;
	}
	printf("\033[0m");
	gotoxy(4,currunt_line);
	if (argc==2)
	{
		f=fopen(argv[1],"a+");
		for(;;++i)
		{
			ch=getc(f);
			if (ch==EOF)
			{
				break;
			}
			file[i]=ch;
			++k;
			printf("%c", file[i]);
			line_width[currunt_line]=k;
			if (ch=='\n')
			{
				line_width[currunt_line]-=1;
				currunt_line++;
				k=0;
				gotoxy(4,currunt_line);
			}
		}
		fclose(f);
	}
	gotoxy(0,height-1);
	printf("for exit( ctr+q ), for save ( ctr+s )");
	gotoxy(line_width[currunt_line]+4,currunt_line);
	while(1)
	{
		ch=getche();
		if (ch>=32&&ch<=126)
		{
			file[i]=ch;
			i++;
			line_width[currunt_line]++;
			save=0;
			clear_last_line();
		}
		else{

			if (ch==10)
			{
				file[i]='\n';
				i++;
				currunt_line++;
				gotoxy(4,currunt_line);
			}
			else if (ch==127)
			{
				for (int j=i;file[j]!='\n'; j++)
				{
					if (file[i+j]=='\t')
					{
						t=t+4;
					}
				}
				gotoxy(line_width[currunt_line]+3+t,currunt_line);
				printf(" ");
				if (currunt_line<=1 && line_width[currunt_line]<1)
				{
					line_width[currunt_line]++;
					i++;
					printf("\a");
				}
				if (line_width[currunt_line]<1)
				{
					currunt_line--;
					gotoxy(line_width[currunt_line]+4+t,currunt_line);
				}
				else{
					line_width[currunt_line]--;
					gotoxy(line_width[currunt_line]+4+t,currunt_line);
				}
				i--;
				file[i]=' ';
			}
			if (ch==19)
			{
				if (argc==2)
				{
					save_file(argv[1],file);
				}
				else if (temp==1)
				{
					save_file(name,file);
				}
				else{
					gotoxy(0,height-1);
					printf("enter file name to save: ");
					temp=1;
					scanf("%s",name);
					save_file(name,file);
				}
			}
			else if (ch==17)
			{
				if (save==0)
				{
					clear_last_line();
					gotoxy(0,height-1);
					printf("are you want to exit whithout save(y/n): ");
					scanf("%c",&c);
					if (c=='y')
					{
						break;
					}
					else if(c=='n')
					{
						if (argc==2)
						{
							clear_last_line();
							save_file(argv[1],file);
							break;
							
						}
						else if (temp==1)
						{
							clear_last_line();
							save_file(name,file);
							break;
						}
						else{
							clear_last_line();
							gotoxy(0,height-1);
							printf("enter file name to save: ");
							scanf("%s",name);
							temp=1;
							save_file(name,file);
						}	
					}
					else{
						clear_last_line();
						printf("invalid input\n");
						gotoxy(line_width[currunt_line]+4,currunt_line);
					}
				}
				else{
					break;
				}
			}
			else if (ch==27){
					getch();
					c=getch();
					if (c=='A')
						{
							if (currunt_line<=1 && line_width[currunt_line]<1)
							{
								currunt_line++;
								printf("\a");
							}
							currunt_line--;
							i=0;t=0;j=0;
							for (int k=1;k<=currunt_line;k++)
							{
								i=i+line_width[k]+1;
								if (k==currunt_line-1)
								{
									if (file[i+j]=='\t')
									{
										t=t+4;
									}
									j++;
								}
							}
							i-=1;
							gotoxy(line_width[currunt_line]+4+t,currunt_line);	
						}
						else if (c=='D')
						{
							if (currunt_line<=1 && line_width[currunt_line]<1)
							{
								i++;
								printf("\a");
							}
							line_width[currunt_line]--;
							gotoxy(line_width[currunt_line]+4+t,currunt_line);
							i--;
						}
						else if (c=='C')
						{
							line_width[currunt_line]++;
							gotoxy(line_width[currunt_line]+4+t,currunt_line);
							i++;
						}
						else if (c=='B')
						{
							currunt_line++;
							i=0;t=0;
							for (int k=1;k<=currunt_line;k++)
							{
								i=i+line_width[k]+1;
								if (k==currunt_line-1)
								{
									if (file[i]=='\t')
									{
										t=t+4;
									}
								}
							}
					i-=1;
					gotoxy(line_width[currunt_line]+4+t,currunt_line);
				}
			}
		}
		if (save==0)
		{
			gotoxy(width-1,height-1);
			printf("*");
			gotoxy(line_width[currunt_line]+4,currunt_line);
		}
	}
	system("clear");
	return 0;
}