#include <room.h>
inherit ROOM;
void create()
{
        set("short","ľ�˳�");
        set("long", @LONG

    ������˺ü���ľ�ˣ�ľ�����滭��������������ź�Ѩ����ѧ
��ĵ���÷���������������Щľ������Ħʵ�壬������������֧��
���ǒz���z�ģ���Ȼ���ӿ������е��󣬲����������ɣ�������ҽʱ
����׼ȷ���ϳ�����Ѩλ��

LONG
        );
        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"1-door",       
        "south":__DIR__"20",          
        "east":__DIR__"15",          
        "west":__DIR__"17",      

        ]) );

       set("objects", ([ /* sizeof() == 1 */
  "/open/doctor/npc/trainee1.c" : 1,
]));
          setup();
}

