#include <room.h>
inherit ROOM;
void create()
{
        set("short","ľ�˳�");
        set("long", @LONG

    ������˺ü���ľ�ˣ�ľ�����滭��������������ź�Ѩ����ѧ
��ĵ���÷���������������Щľ������Ħʵ�壬������������֧��
���ǒz���z�ģ���Ȼ���ӿ������е��󣬲����������ɣ�������ҽʱ
����׼ȷ���ϳ�����Ѩλ��һ���ǻ��ӵİ�ͽ��������ϸ�ĵ�ָ��ʦ
���ǡ�

LONG
        );

        set("outdoors", 1);
        set("exits", ([ /* sizeof() == 4 */
           "north":__DIR__"16",        
        "south":__DIR__"26",           
        "west":__DIR__"21",           
        "east":__DIR__"19",      

        ]) );
        set("light_up", 1);
        set("objects", ([ /* sizeof() == 2 */
  "/open/doctor/npc/su.c" : 1,
  "/open/doctor/npc/trainee1.c" : 1,
]));

  setup();
}


