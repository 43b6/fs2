// Room: /u/w/wugi/b-room.c
inherit ROOM;
string search_shelf();
int i=1;
void create ()
{
  set ("short", "���鷿");
  set ("long", @LONG
������ٰٺ�֮�㣬ƿ�峤��֮��������ܣ�������Ļ�����ܾ�
���ĵģ���һ��������·������Լ���������������ͨ����ͨ��������
����ȥ������ʮ����ܣ�shelf�����÷������š�
ͨ������ط�ֻ�����������ļҾ��ǿ������ɽ�����Ҫ��û��ʲô����
�Ļ��㻹�ǿ��ȥ�ɣ�


LONG);

  set("item_desc", ([ /* sizeof() == 1 */
	"shelf" : "����ϰ�\�Ķ����йؽ�����ʷ���鼮����һ����Ϊ���Դ������ҵ��书���ŵ��������Щʧ�� .
",
]));
  set("light_up", 1);
  set("no_magic", 1);
  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"g3-7.c",
]));
  set("no_fight", 1);
  set("search_desc", ([ /* sizeof() == 1 */
  "shelf" : (: search_shelf :),
]));

  setup();
}
string search_shelf()
{
	if(i>0)
	{
	i=i-1;
	message_vision("$N�������������ȥ , ����һ������뻳�� \n",this_player() );
	new("/open/gblade/obj/papyrus")->move(this_player());
	return "";
	}
if (this_player()->query_temp("shaswordtime")==1)
{
    message_vision("$N�������������ȥ , ������һ�Ž��鲢�ս��ڴ��� \n",this_player() );
    this_player()->set_temp("quests/findball1",1);
   new("/open/gsword/obj1/gball")->move(this_player());
    return "";
}
	message_vision("$N���鷿�з�����ȥ , ���ʲôҲû���� \n",this_player() );
	return "";
}
