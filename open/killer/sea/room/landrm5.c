inherit ROOM;

void create()
{  
   
   set("short","����");
   set ("long", @LONG��

	��ƾ���Ŷ�ˮ��������������������ڵ��ں�������
	Ȼ��Ϊ�˱�����·��ܿ�Σ�յش�����������ø��ź����ߡ�
	ãã�󺣣�����е������ߵ����棬�������������������Ҳ�ܵ���հɣ�
	Ȼ������ǰ�Ŀ�����--------��Ҫ�ϰ�������
	����Ϊ��ʵ������ÿ��ܲ����ˡ�������������

LONG);
  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
        "south" : __DIR__"landrm4.c",  	
       "west" : __DIR__"landrm6.c",  
]));
set("objects", ([ /* sizeof() == 1 */
      "/open/killer/sea/npc/big_fish.c":1,
      "/open/killer/sea/npc/auk.c":1,
      "/open/killer/sea/npc/gull.c":2,
]));

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
me->add("kee",-5);
 return 1;
}