#include <room.h>

 inherit ROOM;

void create ()
{
	set("short", "�ɽ���ǰɽ");
	set("long", "�����ǰ���Ǵ�ֱ���ͱڣ��⻬����һ����Ҳ�޷��������Ÿ���ά�����ͱ�(cliff)��
��࣬��ɫ������ɫ��������ʹ���뿴�����Щ�������Ǹ߶�ʵ��̫��������ôŬ
����Ҳ�޷��Ƹ���ϸ��        
");

  set("item_desc", ([ /* sizeof() == 1 */
  "cliff" : "�ұ���Ψһ���ѷ�,�߶�Ҳ�ϵ�,ʹ��һ��(climb),˵����������ȥŶ
",
]) );
  seteuid(getuid());

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"rroad1",
  "east" : __DIR__"rroad3",
]) );

  set("outdoors", "/open/gsword/room" );


  setup();
}

void init()
 {
 add_action("climb_cliff","climb");
 }
 int climb_cliff(string str)
 {
	string skill;
   if(str!="cliff")
  {
    return 0;
   }
//	if(!stringp(skill = this_player()->query_skill_mapped("move")))
//	{
//	message_vision("$N�������ⶸ�͵�ɽ�ڣ�������Ϊû���Ṧ������������ֻ�÷���\n", this_player());
//	return 1;
//	}
	message_vision("$Nʹ��"+to_chinese(skill)+"��Ӱ��ʧ��ɽ����\n",this_player());
this_player()->move(__DIR__"hole");
 return 1;
 } 
