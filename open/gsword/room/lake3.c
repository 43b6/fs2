#include "/open/open.h"

inherit ROOM;
int counter = 10;
void create ()
{
  set ("short", "��������");
  set ("long", @LONG
���������������϶�,�Դе���ľ��̦���������Ҫ��,
������ˮ�ڴ��������,һ����ˮб����������,��׵�ʯ��
��ˮ��,���Եþ�ӯ.�㲻����������ȥ����(touch)Ϫˮ,ϴ
ȥ��һ��ĳ���...
LONG);

  set("objects", ([ /* sizeof() == 2 */
  "/open/gsword/mob/squirt" : 1,
  "/open/main/obj/torch" : 1,
]));

  set("outdoors", "/open/gsword");

  set("exits", ([ /* sizeof() == 2 */
  "northeast" : "/open/gsword/room/lake2",
  "northwest" : "/open/gsword/room/lake0",
]));

  set ("��Դ/Һ��", ([
       "����" : "ˮ",
       "����" : "��ˮ",
       "ֹ��" : 30
  ]) );

  setup();
}

void init()
{
     add_action("touch_water","touch");
}
int touch_water(string arg)
{  
   int _gin;
   message_vision("ֻ��һ���̲���$N��������....\n",this_player());
   if( (counter + random(10)) > 10 )
   {
     message_vision("$N����ȫ����ˬ....\n\n",this_player());
     this_player()->add("kee",10);
     counter --;
     return 1;
   } else {
      _gin = this_player()->query("gin");
      message_vision("$N����ȫ��һ����...\n\n",this_player());
      if( _gin >5 )
      { 
       this_player()->add("gin", -5);
      }else{
       message_vision("$N�ƺ�������!!\n",this_player());
       this_player()->set("gin", 1);
       this_player()->set("kee", 1);
      }    
      return 1;
   }
}                              
