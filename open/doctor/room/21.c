#include <room.h>
inherit ROOM;
void create()
{
        set("short","ľ�˳�");
        set("long", @LONG

    һ�ɳ�ҩζ�˱Ƕ�������������ζ������ҽ֮����˵������ʹ��
�Ǹ�Ϊ��ܣ��������ŵĵ�����Ҳ������ҽ����ΪĿ�꣬ǽ������һ
Щ�����Ѩλͼ��

LONG
        );

        set("outdoors", 1);
        set("exits", ([ /* sizeof() == 3 */
        "north":__DIR__"17",          
        "south":__DIR__"27",          
        "east":__DIR__"20",       

        ]) );
        set("objects",([ /* sizeof() == 2 */
  "/open/doctor/npc/trainee1" : 1,             
  "/open/doctor/npc/trainee2" : 1,            

]));

  setup();
}


