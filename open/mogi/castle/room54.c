
inherit ROOM;
#include <ansi.h>
void create () {
set ("short","�ű���¥");
        set ("long","ǽ���ϵ�������ɫ�Ĺ����ϸһ�����ɿ�������\���������ɵ�������
���������\����ֻ�۾��������������͸�ſֲ�����Ϣ������Ҳ���ź�
��ĵ�̺�����˲�������ض������������ܵ���ħ�ƺ�Ҳ�����������
����Ҳ�º͵Ķ࣬��һ�����տ�������¥�µ����й�֮���޲������㲻
�������Լ�������ħ�磿
");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([
            "east" :  __DIR__"room55",
            "south" :  __DIR__"room47",
            "west"  : __DIR__"room56",
            "north" :  __DIR__"room57",
      ]));
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/wu-low" : 1,
  __DIR__"npc/mou-houng" : 1,
                 ]));

        setup();
}
int valid_leave(object me, string dir)

{
        if(dir=="north" && present("ghost",environment(me)))
  {

message_vision(HIY"ҹ��˫��˵�������£����ﲻ�����ȥ�ĵط���\n"NOR,me);

return 0;
}
return 1;
}
