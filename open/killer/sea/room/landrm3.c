inherit ROOM;

void create()
{  
   
   set("short","�⺣");
   set ("long", @LONG��

	��ƾ���Ŷ�ˮ��������������������ڵ��ں�������
	Ȼ��Ϊ�˱�����·��ܿ�Σ�յش�����������ø��ź����ߡ�
	ˮ���Ѿ��������͵ģ����㲻���п����졣
	Ŀǰ���������Ѿ���Զ�����е����������������ɵ���ȥ��
	

LONG);
  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
        "west" : __DIR__"landrm2.c",  	
       "north" : __DIR__"landrm4",  	
]));

set("objects", ([ /* sizeof() == 1 */
      "/open/killer/sea/npc/brra_fish.c":2,
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
me->add("kee",-2);
 return 1;
}