#include <room.h>

inherit ROOM;

void create()
{
           set("short","��Ѩ");
          set("long","��Ѩ�ڶ���,���ھ��󶼲��,������û�������ĵ�ͼ����֮ǰ,��ò�Ҫ�󴳴˴�,�Ա���һ���ƺ���ǰ����Ѫд�����ĸ�ʾ��(sign)��\n");

        set("exits", ([
          "west":__DIR__"hole12",
          "east":__DIR__"hole11",
          "north":__DIR__"hole24",
          "south":__DIR__"hole21",
      "down":__DIR__"hole2",
        ]) );
        set("item_desc", ([ /* sizeof() == 1 */
        "sign" : "������:���û��ʮ��İ��յĻ�,��ò�Ҫ������һ¥��mob,�Ҿ����������ǵ�����,��������,���ϵĵ�·��ȥ�޻�,�Լ�С��!\n"
        ]) );
        setup();
}
