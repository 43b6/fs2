
inherit ROOM;
#include <ansi.h>
void create () {
set ("short","�ű���¥");
        set ("long","���ܳ��������˼�����Ϣ�����գ���ɭɭ�Ĺ������
һ��һ���ţ���ϸһ���ƺ����в��ٰ׹�ɢ���ڵ��ϣ�
����ʹ�����˼�Ƥ��񡣿���������һ��������ĳ��ȡ�
�����ƺ���һ���Ź����̹�ķ��䣿
");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([
            "east" :  __DIR__"room30",
            "west" :  __DIR__"room32",
          
      ]));
      set("objects",([ /* sizeof() == 1 */
           __DIR__"npc/mob6" : 1,
      ]));

       

        setup();
}
int valid_leave(object me, string dir)

{
        if(dir=="west"&&present("ghost",environment(me)))
  {

message_vision(HIY"���ħ��Ц��:������Ϊ��������ң���\n"NOR,me);

return 0;
}
return 1;
}
