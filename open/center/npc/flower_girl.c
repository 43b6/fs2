#include <obj.h>
#include <ansi.h>
#include "/open/open.h"
 
inherit F_VENDOR;
static int reboot_time = 0;

string give_flower();

void create()
{
        set_name("������СŮ��", ({ "selling flower girl", "girl" }) );
        set("nickname",HIW"����û�˰�"NOR);
        set("gender", "Ů��" );
        set("age", 16);
        set("long", @LONG
����һλ���ű̷����������ʻ���ƯƯŮ������������ĸ��֮��, ��
���ڴ����ʻ�, ϣ���������������һ��СС���⡣��Ҳ����������
����Ʒ����(ask girl about ��Ʒ)

LONG);
        set("attitude", "friendly");
        set("rank_info/respect", "С����");
        set("combat_exp",150000);

        set("vendor_goods", ({
            CENTER_OBJ"flower",
        }) );
        set("no_kill",1);

        set("inquiry",([
          "��Ʒ":"��, ����������ʣ��һ���ʻ�, ��Ҫ�Ļ��ҿ��Ը���",
          "�ʻ�":(: give_flower :),
        ]));

        set("chat_msg", 5);
        set("chat_msg", ({
            "СŮ��˵��: ������Ҫ���ʻ���Ů����\n",
        }) );

        set("greeting_msg", ({
            "СŮ��˵��: �������ʻ�ม�\n",
        }) );
        setup();
}

string give_flower()
{
        object who, item;
        who = this_player();

        if( who->query("quests/happy") || who->query_temp("flower")==1 )
                return "�㲻���Ѿ�����һ���ʻ�����\n";
        else if( who->query_temp("�ʻ�")==2 ) {
                item = new("/open/center/obj/flower");
                item->move(who);
                message_vision("Ү��СŮ����$Nһ���ʻ���\n", who);
                who->set_temp("flower", 1);
                return"���ǵ�,�����һ��б��ݣ������!\n";
        }
        else {
                item = new("/open/center/obj/flower");
                item->move(who);
                printf("СŮ����%sһ��%s��\n",
                who->query("name"),item->short() );
                who->set_temp("flower", 1);
                return "ף��������ֆ� :P��\n";
        }
}
