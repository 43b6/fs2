#include <room.h>
inherit ROOM;
void create()
{
        set("short", "����");
        set("long", @LONG

    һ�ɳ�ҩζ�˱Ƕ�������������ζ������ҽ֮����˵������ʹ��
�Ǹ�Ϊ��ܣ��������ŵĵ�����Ҳ������ҽ����ΪĿ�꣬ǽ������һ
Щ�����Ѩλͼ��

LONG
        );
        set("outdoors", 1);
        set("exits", ([ /* sizeof() == 2 */
        "east":__DIR__"17",            
        "south":__DIR__"23",          

        ]) );

  setup();
}

int valid_leave(object me, string dir)
  {
    if(dir=="south"&&me->query("gender")=="����")
        return notify_fail("�������޷������ܹ��鷿�� ?\n");

   return 1;
}


