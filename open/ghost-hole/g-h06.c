#include <ansi.h>
inherit ROOM;
void create ()
{
set("short",BLU"�����Ĺ�"NOR);
set("long",@LONG
�ұڲ��ϵ���������, ����������׵ĵص�
����, �������˵�Ļ������, �ǵ���Ӧ�þ�����
���ħ�Ĵ�Ӫ��, һ�뵽��һ��, ���ƺ������
һ��....
LONG);
set("exits",([
"east":__DIR__"g-h04",
"down":__DIR__"g-h11",
]));
set("no_transmit",1);
setup();
}

int valid_leave(object me,string dir)
{
me=this_player();
if(dir!="down")
{
me->delete_temp("ghost-hole/down");
return 1;
}
if(me->query_temp("ghost-hole/down"))
{
tell_object(me,HIY"��һ��ǧ�ﴫ�����ն���:����...��Ȼ����־�ᶨ, 
����Ҳ���ڶ�˵��, ϣ��������ܴ�������ħ...\n"NOR);
me->delete_temp("ghost-hole/down");
return 1;
}
{
tell_object(me,HIR"һ��ǧ�ﴫ�����ն���:С�İ�, һ�����������ħ
�ĵ���, û��ǿ�������, ֻ�Ầ���Լ�!!\n"NOR);
me->set_temp("ghost-hole/down",1);
return 0;
}
}
