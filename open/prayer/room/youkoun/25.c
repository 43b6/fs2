//open/prayer/room/youkoun/25.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ܵ�");
        set("long",@LONG

        �ܵ��ڲ������İ�����Խ��Խ��, �ܵ��ڵĵƹ��ǰ����
        �����!!���ϵ�֫��к�ҲԽ��Խ��, �Ų������涼�ᷢ
        ���ר�~~�ר͵�����!!�ô̶���!!

LONG);

        set("exits", ([ /* sizeof() == 2 */
        "east":__DIR__"26",     
        "west":__DIR__"24",     
 
        ]) );
        set("no_fight", 0);
                
  setup();
}
