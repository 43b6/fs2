// by roger
inherit ROOM;
#include <ansi.h>
#include "wind-rain.h"
void create () {
set ("short","��¥ǰ");
set ("long", @LONG
    �����ѵ��˺��ľ�ͷ����ǰ�ǡ����ϸ��¥������¥��Χǽ����
�����޴��¥���ں������������£�������ɻλΣ��ֲ�������ɫ��
�����������ѵı�Ե�����ϸ��¥�Ǿ�����һ���ܹܺڰ�������
��ʮ��·��˪����ʮһ�ɷ��̣�һ����˺������������ֵ�һ������
���ϸ��¥��¥������������Ϊ������������
LONG);



  set("exits", ([
            "east"  : __DIR__"room8",
            "enter"  : __DIR__"1",
                ]));

  set("objects", ([ 
  __DIR__"npc/rain-guard-door" : 3,
                  ]));
       

        setup();
}

int valid_leave(object me, string dir)
{
   string wind_rain;
if(dir=="enter" && present("wind_rain",me)){
 message_vision(HIY"�껤��˵ : ��Ȼ���³��б�¥�ķ���¥, ���Ǳ�¥����. \n"NOR,me);
 return 1;
                                            }

        if(dir=="enter" && present("guard",environment(me)))
  {

message_vision(HIY"�껤��˵: �Բ���, ���ﲻ׼���˽���. \n"NOR,me);
return 0;
  }


return 1;
}
