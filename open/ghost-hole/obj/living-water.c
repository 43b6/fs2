
inherit ITEM;
#include <ansi.h>
void create ()
{
set_name("����֮ˮ",({"living-water","water"}));
set("long","��ڤ��ϡ�еĲ���֮һ, ��˵��ֻ���ƹ�����ڤ�����������
ڤ����֪����ȡ�ķ���!!");
        set_weight(30);
        if ( clonep() )
                set_default_object(__FILE__);
        else{
set("value",1);
set("unit","��");
set("base_unit","ƿ");
}
setup();
}


void init()
{
object me=this_player();
object ob=this_object();
if(me->query_temp("ghost-hole/wis-man/know-living-water"))
{
ob->set("long","��ڤ��ϡ�еĲ���֮һ, ��˵��ֻ���ƹ�����ڤ�����������
ڤ����֪����ȡ�ķ���!!
ʹ�÷���[cover xxx]!!
");
add_action("do_cover","cover");
}
}

int do_cover(string arg)
{
object me=this_player();
object ob,ob1,ob2;
ob=this_object();
ob2=new(__DIR__"butterfly");
ob1=present("death-butterfly",me);
if(!arg)
return 0;
if(!me->query_temp("ghost-hole/wis-man/know-living-water"))
return notify_fail("�㲻�������ʹ������֮ˮ!!\n");
if(arg!="butterfly")
return notify_fail("�������޷���������֮ˮ����!!\n");
if(!present("death-butterfly",me))
return notify_fail("�㲢û�������ɹ�����!!\n");
message_vision(HIY"$N������֮ˮ��������, ͻȻ��, һ������ֱ�����������, ����������!!\n"NOR,me);
ob2->move(me);
destruct(ob1);
destruct(ob);
return 1;
}