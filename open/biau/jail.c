// Room: /u/o/onion/room/hell.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
һ���������յĵ���,ֻ��һ��΢���Ĺ�����ǽ�Ƿ���͸����,��ǿ���Էֱ����ܵ�
����,����ǽ�����ɼ�Ӳ�Ļ���ʯ������,ƾ��Ĺ������ڵ��������������,Ӳ����ǽ
���������������.�뵽�Լ�Ҫ���������,����ȥ��MUD,�;�����������,���ۡ�....

LONG
	);
        set("item_desc", ([
	"corner" :
"������˫��,��ϸ����������,����ʵ����̫����,ʲô����������...\n",	
        "plate" : 
"��ͷ�ƺ�����һЩ�׹���,ƾ��������Ĺ�ѧ֪ʶ,���ʶ����Щ���ӵ���˼�� :\n"+
"\n			[1;36mIloveOnion[0m\n\n"+
"��..�ѵ����������?\n"
	]));
	
	setup();
}

        void init()
        {
        	add_action("do_search","search");
                add_action("do_say","'");
                add_action("do_say","say");
        }
        
        int do_say(string str)
        {
        	if (str!="IloveOnion")
        	return 0;
        	else
        	{
        	write("��ϲ��!!������password,���Գ�ȥ��.\n");
        	tell_room(environment(this_player()),
        	(string)this_player()->query("name")+
        	"��Ȼ��ʧ������,��...û���ҳ�ȥ...\n",
                ({this_object(),this_player()}));
                this_player()->move(__DIR__"room3");
                write("������һ��,�����ڵ���������,��...�ⲻ��ԭ���ĵط���?\n");
                tell_room(environment(this_player()),"������һ��,�㿴��"+
                (string)this_player()->query("name")+"��֪�����ǵ�������...\n",
                ({this_object(),this_player()}));
        	return 1;
        	}
        }	
        int do_search(string str)
        {
        	if (str!="corner")
        	{
        	write("���������ĵ�����һ��...\n"+
       		      "��!!һֻ��è�ӽ���(corner)�ܳ���\n");
		return 1;
		}
		else
		{
		write(
"�������ƺ���һ��ʯ��(plate)����͹͹��,������ǽ���ر�һ��,�ѵ����ǻ���?\n");
		return 1;
		}
       	}         
