#include <room.h>
inherit ROOM;
void create()
{
        set("short", "����");
        set("long", @LONG

    ѧҽ����Ϊ���ˣ������Ŷ���ħ��ʹ���������˵������ֶθ���
��֮��ǣ��������ħ�̵��ӣ���ò�Ҫ�����ڴˡ�

LONG
        );

        set("exits", ([ /* sizeof() == 2 */
        "east":__DIR__"12",           
        "west":__DIR__"15",      

        ]) );

  setup();
}

int valid_leave(object me, string dir)
  {
    if(dir=="east"&&me->query("gender")=="Ů��")
        return notify_fail("Ů�����޷����븱�����İ칫���� !\n");

   return 1;
}

