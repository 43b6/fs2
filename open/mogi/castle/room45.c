
inherit ROOM;
#include <ansi.h>
void create () {
set ("short",HIW"�׻���"NOR);
        set ("long","������ǰ׻����ң�ǽ�ϵ���һֻ�޴�İ�ɫ�ϻ���ɢ��������
�����ơ������������������磬�ɹ�������ת���߽�һ����ƬС
С��Ҷ�ӣ���������Ǵ�˵�е���Ҷ���������꿪�����һ�Σ�
�������һ�����ڹ�ʵ����֭Һ��ɢ�����˸����޷�Ŀ�á�
");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([
            "north" :  __DIR__"room44",
                      ]));
        set("objects",([ /* sizeof() == 1 */
        __DIR__"obj/leave" : 1,
  //      __DIR__"obj/ninepill" : 5,
                      ]));

        setup();
}


