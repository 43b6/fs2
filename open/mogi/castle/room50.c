
inherit ROOM;
#include <ansi.h>
void create () {
set ("short","��\����");
        set ("long","�����ǹű���¥�������������ԵĻ�潫�����յ�ҫ����磬
������Щ��ħ������ϰ����ʽ����������ˣ�ȭ���м���
������������������һ�ݣ��ⲻ��ʧ���Ѿõķ��װ�ʽô��
");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([
            "south" :  __DIR__"room49",
            "west" : __DIR__"room71",
            
      ]));

        set("objects",([ /* sizeof() == 1 */
   __DIR__"npc/wind-cloud-ghost" : 4,
      ]));

        setup();
}
