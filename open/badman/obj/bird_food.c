// bird_food.c by powell

#include </open/open.h>
inherit COMBINED_ITEM;

void create()
{
	set_name("��ʳ",({"bird food","food"}));
        set("long","һ�������ʳ, ��������ιʳ (feed) �����\n");
        set("unit","��");
        set("base_unit","��");
        set("value", 500);
        set("base_weight", 500);
        set_amount(1);
        setup();
}
void init()
{
        add_action("do_feed","feed");
}

int do_feed()
{
          object who=this_player();
       int i;
        message_vision("$N��һ�������ʳ���ڵ��ϡ�\n",who);
        if (who->query_temp("can_feed")) {
        message_vision("�ݶ��ϵĺ�ƽ�뿴�����ϵ�ʳ��, ��ʼ�Ӷ����, "+
                       "����Ϸ��˹�����\n",who);
          for(i=0;i<5;i++)
        new(BAD_NPC"dove")->move(BAD_ROOM"b16");
        }
        else
        tell_object(who,"Ȼ����̧ͷ���������, һֻ���Ҳû�С�\n");
       add_amount(-1);
	return 1;
}
