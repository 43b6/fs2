inherit ITEM;
#include <ansi.h>
void create ()
{
set_name("������",({"iron box","box"}));
set_weight(10);
    if(clonep())
        set_default_object(__FILE__);
    else{
        set("long","����һ����ͨ�������ӣ��ƺ����Դ�(open)�����ӡ�");
        set("no_get",1);
        set("value",1);
        set("unit","��");
        setup();
}}
void init()
{
add_action("do_open","open");
add_action("do_close","close");
}
int do_open(string arg)
{
object me,ob;
me=this_player();
if(!arg||(arg!="box"))
return notify_fail("��Ҫ��ʲô��\n");
if(me->query_temp("openbox")==1)
return notify_fail("���Ѿ�������������ӡ�\n");
else{
ob=new(__DIR__"note");
me->delete_temp("move_out");
message_vision(HIY"
$N���˺��ӣ�ֻ�����н��������װ���˸�ʽ�����ı���!!
$N��֮�з�����һ�����ƣ���ò�ǳ���Ϥ��ԭ����һ���������ɱ������!!
������װ�Ÿ�ʽ�����ı�����㲻��������һЩ!!
\n"NOR,me);
ob->move(me);
me->set_temp("openbox",1);
return 1;
}
}