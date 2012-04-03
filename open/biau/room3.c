// Room: /u/o/onion/room/w_room1.c

inherit ROOM;

void create()
{
	set("short", "�����������");
	set("long", @LONG
���ȵĵƻ���Ȼ����,�����Ի�������һЩ�����Ļ�ƿ,�ƺ���ֵ����,������Ҳ����
�嵭����ζ.��ע�⵽ƿ������һɫ��Ķ��Ǵ��׵Ļ�,ֻ���ڽ����һ����ƿ�����һ��
���ƵĲ軨,�е�����...
    �����ȵ����Ը���һ��ͼ�.
LONG
	);
	set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"guestroom1",
  "north" : __DIR__"guestroom0",
  "west" : __DIR__"room1",
  "east" : __DIR__"room4",
]));
        set("item_desc", ([ /* sizeof() == 1 */
          "bottle" : "    һ���ԲʵĻ�ƿ,�����ʻ�ʵ�����������,������...\n"
          ]));
          
	set("valid_startroom", "1");

	setup();
}

void init()
{
      	        add_action("do_search","search");
        	add_action("do_move","move");
}
        
        int do_search(string str)
        {
        	
        	if(str!="bottle")
		{
        	write("���Ĵ��Ѳ�,���Ǻ���û�п��ɵĵط�...��~~�׷ѹ���\n");	
        	return 1;
        	}
        	else
        	{
        	write("����һ���鿴,�㷢����ƿ���ƺ������ƶ�(move).\n");
        	tell_room(environment(this_player()),(string)this_player()->query("name")+
      	        "ר�ĵĹ۲��Ż�ƿ,����������������ʱ,��ȴͻȻת���������һЦ,\n"
      	        +"���������Լ��ŵİ���...\n",({this_object(), this_player()}));              
      	        return 1;
      	        }
	}

	int do_move(string str)
	{
		if(str!="bottle")
		write("������������?�ڰ�ɶ������...\n");
		else
		{
		write("�������Ľ���ƿ�ƶ�����,ֻ�������ޡ�~��һ��...\n"
		"��!!...��վ�ĵذ�ͻȻ����һ����,������������������ȥ...\n");
		tell_room(environment(this_player()),(string)this_player()->query("name")+
		"��վ�ĵط�����һ����,�㿴����������ȥ֮��,�ذ����ϻָ�ԭ״."+
		"ֻ����һ��������ɱ�����������ԼԼ�Ĵ�����...\n",
		({this_object(),this_player()}));
                this_player()->reincarnate();
                this_player()->move(__DIR__"jail");
		write("������һ��,�����ڵ�������...\n");
		tell_room(environment(this_player()),"������һ��,�㿴��"+
		(string)this_player()->query("name")+"�������ĵ�������...\n",
                ({this_object(),this_player()}));
		return 1;
		}
	}		
		     	      	           	
