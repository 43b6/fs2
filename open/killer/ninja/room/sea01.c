// /open/killer/ninja/room/sea01.c
inherit ROOM;

void create()
{  
   
   set("short","�����");
   set ("long", @LONG��

	���ƺ��������⺣������������ȥ����ãã�Ĵ�
	
	
LONG);
  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
        "east" : "/open/killer/sea/room/landrm7.c",
        "west" : __DIR__"sea02.c",
]));
//set("objects", ([ /* sizeof() == 1 */
//      "/open/killer/sea/npc/bunk_fish.c":1,
//      "/open/killer/sea/npc/hake_fish.c":1,
// ]));

 setup();
}

int valid_leave(object me, string dir)
{
  int max;
 object ob2;

 if ( !present("static_water",this_player()) )  //�������Ƿ��ж�ˮ��
 {//���û�ж�ˮ�飬�����޷���ˮ���ƶ�
	   message_vision("$N��Ȼû�˶�ˮ�飬�군�ˣ���.........\n",me);
	   message_vision("$N�ں���Ư��........\n", me);
	   me->add("kee",-20);
	   return 0;
}  
 //����ж�ˮ��ʹ������ͨ��
 if (dir == "west")
 {
   if (!me->query_temp("wind"))
      return notify_fail("�㱻�������赲ס���޷�ǰ�� \n");
   if (!me->query("ninja/firstpart"))
      return notify_fail("��֣�û�����һ�׶Σ�����ôѧ��������� \n");
   if (!me->query_temp("secondpart"))
      me->set_temp("secondpart",1);
   me->add("kee",-10);
   return 1;
 }
}
