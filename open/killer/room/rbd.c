// open/killer/room/rbd.c
inherit ROOM;
void create()
{
  set ("short", "����");
  set ("long", @LONG
���Ƕ�孻���ʥ��--��Զɣ�������ĳ�������ˮ������
������Ϊ�������������˿��ش���,ʹ��ɱ�����޷�˳�����а�ɱ�ж���
�����ڵ����������һ��������Ҷ�³ǣ�Զ������Ƹ����Զɡ�
�����ڸ�ʿɽ�ϣ�ȡ���˸�ʿɽ�ܲݡ���˵����̳��ĳ�����ܲݵĴ��ڡ�
С������ɱ���Ƿ��˼�ʮ��,�������������ˮ��,
����ˮ���ѳ�,����ȴ��֪������Ҫͨ������!!
LONG);
   set("exits", ([
// "east"   : __DIR__"rbde.c",
   "south"  : __DIR__"rbds.c",
   "up"     : __DIR__"rb.c",
  ]));
   set("no_fight", 1);
  set("no_magic", 1);
  set("no_transmit", 2);
  set("light_up", 1);
  setup();
} 

void init()
{
 add_action("do_search",({"search"}));
}

int do_search (string arg)
{
 object me,ob;
 
 me=this_player();
 
 if (arg)
 	return 0;
 if ( me->query_temp("rain_1") == 1)
 {
   if (me->query_temp("rain_3") != 1)
   {
      tell_object(me,"��Ȼ������ǰһ����һ����Ӱ����������ǰ\n");
      tell_object(me,"�����ſ�˵����˵�������һֱ������ħ����󷨣�\n");
      tell_object(me,"�ҿ��Ը����æ�����������Ȱ�������һ���Ÿ�ׯ����\n");
      tell_object(me,"���˶�����һ���ţ�����ǰ��һ����������ʧ��\n");
      tell_object(me,"ֻ����һͷ��ˮ���㣬�·�����һ���Ρ�\n");
      ob=new("/open/killer/obj/sorrylet.c");
      ob->move(me);
      me->set_temp("rain_2",1);
      return 1;
   }
   if (me->query_temp("rain_3") ==1)
   {
    message_vision("$N��ϸ������һ�£�������һ����ť������֮�󣬳���һ�����µ�ͨ����\n", me);
    set("exits/down", __DIR__"rourm.c");
    return 1;
   }
 }
 if ((me->query_temp("firstpart") == 5) || (me->query_temp("firstpart") == 11))
 {
      message_vision("$N��������Ľк����٣��ƺ�������˶�������\n", me);
      tell_object(me,"��Ȼ�����µĻ���ͻȻ�򿪣�������һ�����µ�ͨ��\n");
      me->set_temp("opendoor",1);
      //��Ȼ�������£�����ǰ���ķ��䲻һ��
      set("exits/down", __DIR__"rourm2.c");
    return 1;
 }
 return 0;
}

int valid_leave(object me, string dir)
{
  if (dir != "down") 
  {
    this_object()->delete("exits/down");
    return 1;
  }
  //������ǽ�rain��������temp����Ϊ1
  //������ǽ�dark-stpes������opendoorҲ������1
  //�����������û��0->1����������Ϊ������������������Բ���������
  if ( !me->query_temp("rain_3") && !me->query_temp("opendoor"))
    return 0;
    this_object()->delete("exits/down");
  return 1;
}
