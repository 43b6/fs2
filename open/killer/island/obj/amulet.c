inherit ITEM;
void create ()
{
set_name("�����",({"amulet"}));
set_weight(10);
    if(clonep())
        set_default_object(__FILE__);
    else{
        set("long","����һ����Ϊ��ͨ�Ļ��������³�ڽ������ǵĻ�������ƣ�����Ե���(examine)������\n");
        set("value",1);
        set("unit","��");
        setup();
}}
void init()
{
add_action("do_ex","examine");
}
int do_ex(string arg)
{
object me;
me=this_player();
if(!arg||(arg!="amulet"))
return notify_fail("��Ҫ����ʲô��\n");
if(me->query_temp("get_amulet")!=1)
return notify_fail("�⻤�����Ȼ����Ѿ���٣������ڱ���ȴ�С�³�ڡ������֣������ո�
�Ǿ�ʬ�����ʯ�����ӡ�\n");
else {
tell_object(me,"�⻤�����Ȼ����Ѿ���٣������ڱ���ȴ�С�³�ڡ������֡�\n");
message_vision("$N����¶��ʮ������ı��顣\n",me);
message_vision("$N�����˼�������С�ĵ����˵װ�֮�¡�\n",me);
me->move("/open/killer/island/b_q01");
me->set_temp("get_amulet",2);
me->set_temp("move_out",1);
return 1;
}
}
