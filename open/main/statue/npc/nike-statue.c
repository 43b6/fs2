inherit NPC;
#include <ansi.h>
void create()
{
        set_name("�ͼ��ĵ���",({"nike statue","nike"}));
        set("long","����֮�񡣿�������Ϊ����հ�������������ĵ��У������ر����˴�һ����\n���������(pray id)Ҳ���������Ч���!!\n");
        set("title",HBBLU+HIW"��"HIY"����"HIR"����"HIW"��"HIG"����"NOR);
        set("nickname",HIR"��˯��"HIC"����"HIY"��"HIM"�¼�"NOR);
        set("unit","��");
        set("age",291);
        set("value",100);
        set("no_get",1);
        set("no_kill",1);
        set("no_fight",1);
        set("no_sac",1);
        set("no_auc",1);
        set("env/can_tell_wiz","YES");
        set("no_reset",1);
        set_weight(500000);
        setup();
}

init()
{
        add_action("do_pray","pray");
}

int do_pray(string arg)
{
        object me=this_player();

        call_out("greeting",2,me,arg);
        message_vision(HIW"һ���â����$N"HIW"��ȫ����â�����ѽ�$N"HIW"�������͵�����Ķ��ߡ�\n"NOR,me);

        return 1;
}

void greeting(object ob,string arg)
{
        object me;
        me=this_player();
        command("tell "+arg+" "+me->query("name")+"("+me->query("id")+")����һ��ף����������!!\n ");

}

