#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char cmd[20]="shutdown -s -t ";
    char t[5]="0";
    int c;
    system("�ػ�����");  //����cmd���ڱ��� 
    system("mode con cols=38 lines=15");  //���ô��ڿ�ȸ߶� 
    system("color F0");  
    system("date /T");
    system("TIME /T");
    printf("----------- �ػ����� -----------\n");
    printf("1.ʵ��10�����ڵĶ�ʱ�رռ����\n");
    printf("2.���̹رռ����\n");
    printf("3.ע�������\n");
    printf("0.�˳�ϵͳ\n");
    printf("---------------------------------\n");
    scanf("%d",&c);
    switch(c) {
        case 1:
            printf("�����ڶ�������Զ��رռ����(0~600)\n");
            scanf("%s",t);
            system(strcat(cmd,t));
            break;
        case 2:
            system("shutdown -p");
            break;
        case 3:
            system("shutdown -l");
            break;
        case 0:
            break;
        default:
            printf("Error!\n");
    }
    system("pause");
    return 0;
}
