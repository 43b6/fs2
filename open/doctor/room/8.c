#include <room.h>
inherit ROOM;
void create()
{
        set ("short", "������");
        set ("long", @LONG
�ߵ����������ಡ�˲���������������ϣ�ҽ����������ȥ��
ֻ��ԭ��������Ĳ��ˣ�һ���Ӿ������������������ҽ�����µ�һ
����Ȼ�����鴫�������������ŵ����� (open door)��
LONG);
        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"5",                   
        "south":__DIR__"1-door",            
        "east":__DIR__"7",             
        "west":__DIR__"9",            
        ]) );

        set("light_up", 1);
        create_door("south","��ľ���ƴ���", "north",DOOR_CLOSED);
   setup();
}


