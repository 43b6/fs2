inherit ITEM;
#include <ansi.h>
void create ()
{
set_name("������",({"box"}));
set_weight(10);
    if(clonep())
        set_default_object(__FILE__);
    else{
        set("long","һ���ý�������ʮ���ܺϵ����ӣ�����ʮ�־��¡�");
        set("no_get",1);
        set_max_encumbrance(10000000);
        set("value",1);
        set("unit","��");
        setup();
}}
int is_container() { return 1; }
void init()
{
add_action("do_open","open");
}
int do_open(string arg)
{
object me,ob;
me=this_player();
if(!arg||(arg!="box"))
return notify_fail("��Ҫ��ʲô��\n");
if(me->query_temp("openbox")==1)
return notify_fail("���Ѿ��򿪹�����������ˡ�\n");
if(!me->query_temp("move_stone"))
return notify_fail("�㲻֪������δ�������ӡ�\n");
else{
ob=new("/open/killer/island/obj/card");
tell_object(me,HIY"
����˺��ӣ�ֻ�����н��������װ���˸�ʽ�����ı���!!
����֮�з�����һ�顸���ơ�����ò�ǳ���Ϥ��ԭ����һ���������ɱ������!!
������װ�Ÿ�ʽ�����ı�����㲻��������һЩ!!
\n"NOR);
ob->move(me);
me->set_temp("openbox",1);
return 1;
}
}
