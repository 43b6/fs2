// Room: /u/p/pokai/room/wu/road3.c
inherit ROOM;

void create()
{
  set ("short", "������ɱ�����");
  set ("long", @LONG
    ����Ǵ�˵�еġ�������ɱ����������ͷ�����㣬���������߲㣬����������
Ѫ�հ�İ���ɫ������һ�ֲ��������ĸо���  ��˵ֻ�����������ߣ��Ź��ʸ��
�����������Ҳֻ����ǿ�����ߣ����л���ƽ�����߳������������ȡ�����ߵ�֤
����  �㿴�������ſ�վ�ű�����Ȼ�����ˡ�
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"guardian" : 1,
])); 

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"road2",
  "enter" : __DIR__"tower1-1",
]));
  set("outdoors", "u");
  set("no_fight",1);
  set("no_magic",1);
  set("no_smash",1);
  set("no_dest",1);

  setup();
}

/* void init() {
	add_action("do_kill","kill");
}

int do_kill(object me , string str){
  if(present("tower older",environment(me)) && str == "older") {
    tell_object(this_player(),"��������������һ��˵��ȥ��ȥ��ȥ���������£�\n");
    me->move(__DIR__"road2");
    return 0;
  }
  return 1;
} 
*/

  int valid_leave(object me, string dir)
 {
        if(dir=="enter"&&present("tower older",environment(me))) {
  if (me->query("class")=="fighter")
  return 1;
  else  return notify_fail("�������˷����㲻�����ߣ���ֹ����롣\n");
  }
  tell_object(this_player(),"���������������򣬶���Ц��Ц��\n");
  return 1;  
}
