#include <room.h>
inherit ROOM;
void create()
{
set("short", "ɱ������");
  set ("long", @LONG
�����Ǽ�Ϊƽ���ĵط���һ����ȥ���ƺ�û��һ����˯���ĵط���
��������ɱ�ֵ�������ƣ�Ϊ����˯��ʱ����ɱ��������һ���ǿ�����˯�����ˡ�
�ض���ʱ�������������ţ���������û�ɱ����˯�е����ǲ����ܵġ�
���������ƺ���������ɭ��������һ�㣬������֣��ѵ�������ȥ���㣿

LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
"west" : __DIR__"sr0.c",
"north" : __DIR__"sr2.c",
]));
  setup();
}

void init()
{
  object ob2;
  ob2=this_player();

  add_action ("do_search","search");

  if (!interactive(ob2)) return ;

  if (ob2->query_temp("rain_4")==1)
  {
   tell_object(ob2,"���ݲ��ٵ��������㷢����������һ¥���ܵ�\n"); 
   tell_object(ob2,"���ڿ��ˣ��������˺������������ܵ������ܵ���ȥ\n");
   ob2->move(__DIR__"underm.c");
  }
}

int do_search ()
{
  object me,ob;

  me=this_player();
  if(me->query_temp("diray")==1)
  {  
   tell_object(me,"��ΪҶ��ɱ�ռ��������������Ĵ���Ѱ�ң���Ȼ������Կ��\n");
   tell_object(me,"������ܸ��˵���ȡԿ��֮ʱ����С�Ĵ������أ���������\n");
   if (me->query("class") != "killer")
   {   
       me->move(__DIR__"doorm.c");
       return 1;    
   }
   me->move(__DIR__"sdr1");
/*   ob=new("/open/killer/obj/key_d.c");
   ob->move(me);   */
   me->set_temp("key",1); 
   return 1;
  }
  return 0;
}
