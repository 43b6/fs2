#include <ansi.h>
inherit ROOM;
void create ()
{
set("short",BLU"�����Ĺ�"NOR);
set("long",@LONG
���ܵ��ұ����ɰ�������ŵİ�Χס, ʹ����
ϸ΢�ĺ����������������Ǻ��������, ��խ�Ŀ�
������ѹ���е㴭��������..
LONG);
set("exits",([
"up":__DIR__"g-h03",
"west":__DIR__"g-h06",
]));
set("no_transmit",1);
setup();
}
int valid_leave(object me,string dir)
{
if(me->query_temp("ghost-hole/drop_in")!=1)
{
message_vision(HIW"$Nһ���ŵ�ͻȻһ��, �����˵����˶�Ѩ��\n"NOR,me);
me->move(__DIR__"g-h05");
message_vision(HIW"$N���ص�������!!"NOR,me);
me->set_temp("ghost-hole/drop_in",1);
return 0;
}
return 1;
}

