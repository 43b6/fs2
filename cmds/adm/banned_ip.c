#include <ansi.h>
inherit F_CLEAN_UP;
#define ALLOW ({"add","del","check","help","quit"})
string change_local;
private void get_choice(string arg, object user);
private void get_value(string value, object user);
string WARNING=HIY"
        �ر��ע��!!
        ������ǵ�һ��ʹ�ñ�ϵͳ���ǶԱ�ϵͳ������Ϥ
        ��һ��Ҫ����(help)ѡ��ۿ�ʹ�÷�����������Ϊ
        ��ʧ������ϵͳ�Ĳ�����!!��ϵͳĿǰ��û�ж���
        ��ѡ�����κεı�����ʩ��������С��ʹ�á�
        \n"NOR;
string LOCAL="
        (add)   ���Ӳ���������ip
        (del)   ɾ��Ŀǰ����������ip��Ҳ�����ø�ip����
        (check) �鿴Ŀǰbanned_ip����һЩ
        (help)  �ۿ���ϵͳ˵����
        (quit)  ����ϵͳ�ص�fs
        \n";
string DOHELP=HIG"
        ��ϵͳ�ṩ�����ӣ�ɾ������ѯĿǰ�б����õ�ip��Ϊ�˱��
        �ķ��㣬�ر��ʹ����ѡ��ʽ��ϵͳ���ò�������㣬������
        ��ͬ���ǣ����趨�϶���*���������Ԫ��ʹ�á�
        ��ע�⣬��������趨��ok_ip���趨��ͬ���뿴����:
        �Ϸ�������: 163.26.238.*
        ���Ϸ�������: 163.26.238*
        �뽫������Ԫ����.�ĺ��棬��û�������Ļ���������жϵĴ�
        ��
        �Ա�ϵͳ���κε����⣬��post��bss��board�ϣ���һ�����
        ��!!
        \n"NOR;
void create()
{
        seteuid(getuid());
}
int main(object me, string arg)
{
        write(HIC"        �㼺��������banned_ip�޸�ϵͳ!!\n"NOR);
        write(WARNING);
        write(HIC"        ��ϵͳ�ṩ������Ĺ���!!\n"NOR);
        write(LOCAL);
        write("����������֮ѡ��:\n");
        input_to( (: get_choice :), this_player() );
        return 1;
}
private void get_choice(string arg, object user)
{
        int flag;

        if( member_array(arg, ALLOW) == -1 )
        {
        write("��ϵͳ��û���ṩ����Ҫ�ķ�������������!!!\n");
        write(LOCAL);
        write("����������֮ѡ��:\n");
        input_to( (: get_choice :), this_player() );
        return ;
        }
        switch(arg)
        {
                case "check":
                        write("Ŀǰ���õ�ip��:\n");
                        CBIP_D->ip_list();
                        flag=1;
                        break;
                case "quit":
                        write("��л��ʹ�ñ�ϵͳ���´��ټ�!!!\n");
                        return ;
                        break;
                case "help":
                        write(DOHELP);
                        flag=1;
                        break;
                default:
                        change_local=arg;
                        flag=0;
                        break;
        }
        if(flag)
        {
        write(LOCAL);
        write("����������֮ѡ��:\n");
        input_to( (: get_choice :), this_player() );
        return ;
        }
        else
        {
        write("��ĿǰҪ�������Ŀ��("+change_local+")!!\n");
        if(change_local=="add")
        {
                write("Ŀǰ���õ�ip��:\n");
                CBIP_D->ip_list();
                write("������Ҫ���ӵ�ip:\n");
                input_to( (: get_value :), this_player());
                return ;
        }
        else
        {
                write("Ŀǰ���õ�ip��:\n");
                CBIP_D->ip_list();
                write("������Ҫɾ����ip:\n");
                input_to( (: get_value :), this_player());
                return ;
        }
        }
        return ;
}
private void get_value(string arg, object user)
{

        if(!arg)
        {
        write("�㲢û����("+change_local+")�����!!!\n");
        }
        else
        {
                if(change_local=="add")
                {
                CBIP_D->add_ip(arg);
                }
                else
                {
                CBIP_D->del_ip(arg);
                }
        }
        write(LOCAL);
        write("����������֮ѡ��:\n");
        input_to( (: get_choice :), this_player() );
        return ;
}

