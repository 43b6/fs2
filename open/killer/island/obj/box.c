inherit ITEM;
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
}
int do_open(string arg)
{
object me,ob;
me=this_player();
if(!arg||(arg!="box"))
return notify_fail("��Ҫ��ʲô��\n");
if(me->query_temp("get_note")==1)
return notify_fail("���Ѿ�������������ӡ�\n");
if(me->query_temp("move_out")!=1)
return notify_fail("��򲻿���������ӡ�\n");
else{
ob=new(__DIR__"note");
me->delete_temp("move_out");
message_vision("$N���������ӣ�������ȡ����һ��������\n",me);
ob->move(me);
me->set_temp("get_note",1);
return 1;
}
}