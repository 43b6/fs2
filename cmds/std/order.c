// ���¸�д order by swy
inherit F_CLEAN_UP;
#include <ansi.h>
void create() { seteuid(getuid()); }
int main(object me, string arg)
{
string dest,cmd,verb,act;
object ob;
if( me != this_player(1) ) return 0;
if( me->query("class")!="blademan" )
return notify_fail("�㲻�ǵ����޷�������\n");
if( me->query_skill("riding",1) < 70 )
return notify_fail("�������̫�ͣ����ܿ�����ࡡ�\n");
if( me->query_temp("is_riding") != 1 )
return notify_fail("��û��������ܼ������أ�\n");
if( !arg || sscanf(arg, "%s to %s", dest, cmd) != 2 )
return notify_fail("ָ���ʽ : order <����> to <����>\n");
if( !(ob = present(dest, environment(me))) )
return notify_fail("����û�� "+dest+"��\n");
if( !living(ob) )
return notify_fail("��������Ѱɡ�\n");
if(me->query("id") != ob->query_temp("my_boss"))
return notify_fail("��ɵ�������ֲ��������\n");
if(sscanf(cmd,"%s %s",verb,act)) {
if(verb=="save"||
verb=="do"||verb=="wield"||verb=="set"||verb=="join") 
return notify_fail("û������ָ�\n");
}
if(cmd[0..3]=="quit") return notify_fail("û������ָ�\n");   
if(cmd[0..3]=="save") return notify_fail("û������ָ�\n"); 
if(cmd[0..3]=="join") return notify_fail("û������ָ�\n");
if(cmd[0..3]=="team") return notify_fail("û������ָ�\n");   
message_vision(HIC"$N����������������ﵽ�����һ��\n"NOR,me);
message_vision(HIC"�������ָ�Ӷ�����"+cmd+"�Ķ�����\n"NOR,me);
ob->force_me(cmd);
if(verb=="k"||verb=="ki"||verb=="kil"||verb=="kill"||
verb=="f"||verb=="fi"||verb=="fig"||verb=="figh"||verb=="fight")
{ me->force_me(cmd); } 
return 1;
}

int help(object me)
{
write(@Help

ָ���ʽ : order <����> to <����>

�ܼ��������ָ����Ҫ���� 70 ��

Help);
return 1;
}
