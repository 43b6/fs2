// tell.c

#include <ansi.h>
#include <dbase.h>
#include <net/dns.h>

inherit F_CLEAN_UP;
inherit F_DBASE;

int help(object me);

        void create() {seteuid(getuid());}

int main( object me, string arg )
{
        int len;
        string target, msg, mud;
        string stat;
        object obj;

        if( !arg || sscanf(arg, "%s %s", target, msg)!=2 ) return help(me);
        target = lower_case (target);

        if( sscanf(target, "%s@%s", target, mud)==2 ) {
          // �Լ�дһд���õ���
          // if (wizardp (me)) {
                GTELL->send_gtell(mud, target, me, msg);
                write("��·ѶϢ���ͳ�������Ҫ�Ժ���ܵõ���Ӧ��\n");
                return 1;
          // }
          // else
          //   return notify_fail ("��ϵͳ��: ��Ҳ����ÿ��� tell\n");
        }

        obj = find_player(target);
        if( !obj )
        	return notify_fail("û�������...\n");
//asin�Լ�˵ϣ�����Թص�tell,���ԾͰ�����by bss
        	
        if( obj->query("id") == me->query("id") )
        	return notify_fail("��������?!\n");        	

        if(!wizardp(me)&&wizardp(obj)&&wizhood(obj)!="(manager)"&&wizhood(obj)!="(admin)"&&wizhood(obj)!="(arch)")
                return notify_fail("��Ҳ��ܶԴ���ʦ���µ����� tell��\n");
        if( obj->query("env/no_tell") && wiz_level(me) <= wiz_level(obj)&&!me->query("env/can_tell_wiz"))
		if( wiz_level(obj) > 1 )
           		return notify_fail("û�������...\n");
          	else if(!me->query("env/can_tell_wiz"))
           		return notify_fail(obj->name()+"���ڲ����ܴ��š�\n");
        if( obj->query_temp("netdead") )
          return notify_fail (GRN+ obj->name(1)+"������...\n" NOR);

        stat = "";
        if( in_input(obj) )
          stat = obj->name(1)+"����������...\n";
        if( in_edit(obj) )
          stat = "�༭������...\n";
        if( interactive(obj) && query_idle( obj ) > 120 )
          stat = "������...\n";
write("��"+HIW+"��̸"+NOR+"��"HBRED+stat + "����ǧ�ﴫ������" + obj->name(1) +": " + msg+"\n"NOR); 
tell_object(obj, sprintf("��"HIW"��̸"NOR"��"HBRED"%s��ǧ�ﴫ��������: %s\n"NOR,
                me->name(1)+"("+me->query("id")+")", msg));
	if( obj->query("away") )
    {
    len=sizeof(obj->query("away"));
		if( obj->query("away")[0..0]=="1" )
		        tell_object( me, sprintf( HBGRN"%s��ǧ�ﴫ��������: %s\n"NOR,
                    obj->name(1)+"("+obj->query("id")+")", obj->query("away")[1..len-1] ));

    }
        obj->set_temp("reply", me->query("id"));
        return 1;
}

int remote_tell(string cname, string from, string mud, string to, string msg)
{
        object ob;

        if( ob = find_player(to) ) {
                if( cname )
                        tell_object(ob, sprintf(HIG "%s(%s@%s)�����㣺%s\n" NOR,
                                cname, capitalize(from), mud, msg ));
                else
                        tell_object(ob, sprintf(HIG "%s@%s �����㣺%s\n" NOR,
                                capitalize(from), mud, msg ));
                ob->set_temp("reply", from + "@" + mud);
                return 1;
        } else
                return 0;
}

int help(object me)
{
        write(@HELP
ָ���ʽ : tell <ĳ��> <ѶϢ>
ָ��˵�� :
           ����������ָ��������ط���ʹ����˵����
�����ο� :
           reply
HELP
        );
        return 1;
}
