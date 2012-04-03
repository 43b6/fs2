// suicide.c
// ������ʦ������ɱ��, wade 3/17/1996
// Ϊ�˲�����ɱʹ����ϵͳ�ҵ�.���ɵ��˲�����ɱ��
#include <ansi.h>
 
inherit F_CLEAN_UP;
 
int main(object me, string arg)
{
        if( !arg || (arg!="-f" && arg!="-n"))
                return notify_fail("��ɱ�����֣�����Ҫ��Զ������������Ͷ̥��\n");
 
        // ������ʦ������ɱ��, wade 3/17/1996
        // ���� wiz �ܽ�����Ͷ̥�Ը��������� lys 5/2/1996
        if( me->query("clan/name"))
                return notify_fail("������ɵ��������Ѱ������ɱ!!!\n");
        if (wizardp(me) && arg!="-n") {
          write ("��ʦ������ post ����Ÿ� manager �ķ�ʽ��ɱ.\n\n");
          return 1;
        }
 
        if (arg == "-n") {
                write("�����Ҫ����Ͷ̥��? ����һ�г�Ϊ��������? (y/n)");
                input_to("confirm_reborn",me);
                return 1;
                }
        else if(arg == "-f") {
                write(
                "�����ѡ����Զ��������ɱ��ʽ�������������Ͼ���Զɾ���ˣ������\n"
                "���������ȷ���Ļ��������������룺");
                input_to("check_password", 1, me, 1);
                return 1;
        }
}
 
void confirm_reborn(string yn, object me)
{
 
        if( yn=="") {
                write("�����Ҫ����Ͷ̥��? ����һ�г�Ϊ��������? (y/n)");
                input_to("confirm_reborn",me);
                return;
        }
        if( yn[0] != 'Y' && yn[0] != 'y' ) {
                write("�����뿪���, ����Ŭ����, ������������!\n");
                return;
        }
 
        write(
               "�����ѡ������Ͷ̥��������������е����ϣ����������ԡ�\n"
               "���������ȷ���Ļ��������������룺");
        input_to("check_password", 1, me, 0);
        return;
}
int reset_body(object me)
{
        object new_body, old_link = me->query_temp("link_ob");
        new_body = LOGIN_D->make_body(old_link);
        new_body->set("gender",me->query("gender"));
        exec(old_link,me);
        destruct(me);
        new_body->set("str",0);
        new_body->set("cps",0);
        new_body->set("int",0);
        new_body->set("cor",0);
        new_body->set("con",0);
        new_body->set("spi",0);
        new_body->set("per",0);
        new_body->set("kar",0);
        write("���µ�������츲��, ��ú�ѡ���趨��\n");
        write ("������ϣ��������" +
               "�Ƕ���? �Ϸ���ֵ�� 10-30, Ŀǰʣ�� 160 : ");
        input_to("get_points",old_link,new_body);
 
}
void get_points( string points, object ob, object user)
{
        LOGIN_D->get_points(points, ob, user, 160, "str", 1);
        shout ("�������է�֣�"+user->name()+"����ת��������\n");
        return;
}
void check_password(string passwd, object me, int forever)
{
        object link_ob;
        string old_pass,id;
        int stage;
 
        link_ob = me->query_temp("link_ob");
        old_pass = link_ob->query("password");
        if( crypt(passwd, old_pass)!=old_pass ) {
                write("�������\n");
                return;
        }
 
        if (forever) {
                tell_object( me,
                        HIR "\n\n�����Ҫ��ɱ�ˣ�������!!!!\n\n\n" NOR);
        link_ob = me->query_temp("link_ob");
        if( !link_ob ) return 0;
        seteuid(getuid());
        rm( link_ob->query_save_file() + __SAVE_EXTENSION__ );
        rm( me->query_save_file() + __SAVE_EXTENSION__ );
 
        // �����ż�
        id =  me->query("id");
        rm( DATA_DIR + "mail/" + id[0..0] + "/" + id+".o");
 
        write("�ðɣ�������:)\n");
        shout (me->name() + "��ɱ�ˣ��Ժ�����Ҳ������������ˡ�\n");
        destruct(me);
        return 0;
        }
        else
                reset_body(me);
}

int slow_suicide(object me)
{
        string  id;
        object link_ob;
        int stage;
 
        stage = me->query_temp("suicide_countdown");
        me->add_temp("suicide_countdown", -1);
        if( stage > 0 ) {
                tell_object(me, HIR "�㻹�� " + (stage-1) + " ���ʱ����Ժ�ڡ�\n" NOR);
                return 1;
        }
 
        link_ob = me->query_temp("link_ob");
        if( !link_ob ) return 0;
 
        seteuid(getuid());
        rm( link_ob->query_save_file() + __SAVE_EXTENSION__ );
        rm( me->query_save_file() + __SAVE_EXTENSION__ );
 
        // �����ż�
        id =  me->query("id");
        rm( DATA_DIR + "mail/" + id[0..0] + "/" + id+".o");
 
        write("�ðɣ�������:)\n");
        shout (me->name() + "��ɱ�ˣ��Ժ�����Ҳ������������ˡ�\n");
        destruct(me);
        return 0;
}
 
int help (object me)
{
        write(@HELP
ָ���ʽ : suicide [-f || -n]
ָ��˵�� : 
             �����Ϊĳ��ԭ���㲻�����, �����ѡ����ɱ.
             ��ɱ������:
 
suicide -n : ����Ͷ̥ (���һ�����ϣ������趨���ԡ�)
suicide -f : ��Զ�ĳ�ȥ�������, ϵͳ��Ҫ����
             ����������ȷ�����.
 
������ѡ�� :)
HELP
);
        return 1;
}
