#include <ansi.h>
#include <room.h>
inherit ROOM;
void create()
{
        set("short","������ƫ��");
        set("long", @LONG

    �����ŵ�ƫ����ǽ���������һ����ȵ�Ļ�����������š�����
�Ŵ�����--��ȵ����ʮ��ǰ�߱���ϱ���������Ϊ���٣���տ��ҽ
�����ʺ���ĳ�����ʹ��ԭһ�����Ĵ���������

LONG
        );
        set("exits", ([ /* sizeof() == 2 */
        "south":__DIR__"4",             
        "west":__DIR__"2",
        "out":__DIR__"r1",           

        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
        "/open/doctor/npc/hwa" : 1, 
]));
  setup();
}
int valid_leave(object me, string dir)
{
        if (me->query("class")!="doctor" && dir=="out")
        return notify_fail("������������˽�е�ҩ�ԣ���Ϊ�㲻��ҽ�ߣ����ڵ����ϣ�������Ĳ���������롣!\n");
        return ::valid_leave(me,dir);
        }



