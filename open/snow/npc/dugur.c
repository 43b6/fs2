#include <ansi.h>
#include <../../open.h>

#include <ansi.h>
inherit NPC;
inherit SSERVER;

string chat_msg();
string combat_msg();
int pearl()
{
	object ob;
	ob = this_player();
        if(ob->query("ask_god_kee") != 2)
        return notify_fail("�Ҳ��˽�����˵ʲô!!!!\n");
        command("say ԭ�������綼����˵��ѽ~~�������������!!");
        command("hmm");
        command("say �ð�!!���Ҫ����ʯ������аʯ��������...!");
          ob->set("get_sky_stone",1);
        return 1;
}
string linhwi()
{
if( !present("lin sword",this_player()) )
return "��Ҫ����ȥ������ ? ��������ô֪����˵�������Ǽ� ? �к�ƾ֤ ?\n";
        command("follow " + this_player()->query("id"));
        return "�� ! ����͸���ȥ !\n";
}
int accept_object( object who , object ob )
{
  object mid;
  if( ob->query("id") == "stone" && ob->query("quest_stone"))
   {
        if(who->query("get_sky_stone")!=1)
     return notify_fail("������ⶫ����ʲôѽ??\n");
    say("��������ϸ���˿�!!˵��:���Ȼ����аʯ��\n");
    command("say �ð�!!�ҾͰ���Լ��������ʯ����ɡ�\n");
    mid=new("/open/snow/obj/sky_lin_stone");
    mid->move(who);
    return 1;
  }
  if( ob->query("id") == "lin sword" ) {
                command("nod");
                command("say �� ! ����͸���ȥ !");
                command("follow " + this_player()->query("id"));
                return 1;
        }
  if( ob->query("id") == "poet book" || ob->name() == HIC "����ʫ�ļ�" NOR)
        {
        command("say лл��!!");
        command("hmm");
        command("say Ϊ�˸�л��İ���!!�Ҿ͸������������!!!");
        command("say һ����ȫ�鼰��������������ʥ������ϰ���ϲ�ľ�ѧ!!!");
        command("say ������ɽ�������д�˵�е���������!!!");
        who->set("ask_god_kee",1);
        who->set("ask_super_fighter",1);
        return 1;
        }
/*      if( who->query("ice-stial") ) {
                command("?");
                return 1;
                        }

        command("say лл�� ! �� ! ��ô�Ҿʹ����㺮���� !");
        who->set("ice-stial",1);

        if( !who->query_skill("snow-martial",1) )
                who->set_skill("snow-martial",1);

        who->set("functions/ice-stial/level",1);
*/
                command("say ������������ ?\n");
                return 0;
}
void create()
{
        set_name("������",({"dugur"}));
        set("long",@LONG
���Ƕ��³�Ķ����ӣ�����һ�����ơ��֣�
����ѩ���������������е�һ�ĸ��֣����ǻۡ�
�书����Ʒ�ȽԿ���һƷ��������ò��ʮ��˹��
������������ʿһ������ƣ�����ڽ���������
һ�����ŽС�ȫ����������
LONG);
        set("attitude", "heroism");
        set("gender","����");
        set("nickname",HIC "ȫ������" NOR);
        create_family("ѩ����",5,"����");
        set("age", 20);
        set("str", 20);
        set("cor", 20);
        set("cps", 20);
        set("per", 30);
        set("max_force",1500);
        set("force",1500);
        set("force_factor",30);
        set("max_kee",1000);
        set("kee",1000);

        set_skill("dodge",70);
        set_skill("black-steps",70);
        map_skill("dodge","black-steps");
        set_skill("sword",50);
        set_skill("stabber",50);
        set_skill("unarmed",80);
        set_skill("snow-martial",80);
        map_skill("unarmed","snow-martial");
        set_skill("force",80);
        set_skill("snowforce",100);
        map_skill("force","snowforce");
        set("combat_exp",500000);

        set("chat_chance",40);
        set("chat_msg",({ (: chat_msg :) }));
        set("chat_chance_combat",60);
        set("chat_msg_combat",({ (: combat_msg :) }));
        set("inquiry",([
                "���³�" : "���³����ǼҸ����Ѿ����Ŷ�ʱ�� ...\n",
                "����" : "�Ҹ���Ϊ�˶���ѩ���ɲ����񹦶��߻���ħ ... �� . ...\n",
                "ȥ�ϻ�ͯ��" : "����һ��ʮ��΢���һ�ֹ����ഫ�������ֹ�������������ޣ����ܹ����ϻ�ͯ��������֪�����ֹ���ʮ�����������һ���˲��ࡣ\n",
                "�����" : "������֪��ֻ���ҵ������������ֹ����ǲ�û���������ޣ���ϧ ...\n",
                "��ϧ" : "��ϧ�ҵ����Ѿ������ˣ�����Ҳû������ʲô���ţ������ⲿ����Ҳ�����ʧ���ˡ�\n",
                "����" : "�ҵ���ȥ�ź�ֻ�����¼����Ҵ�����������ʡ��������ȵȣ���û��ʲô�������¡�\n",
                "�����" : "�����ҼҴ��ı���֮һ����ֻ���൱���棬����īˮ����д��Ŷ��\n",
                "������" : "�����ҼҴ��ı������ܹ��������࣬����������ϴ��������������������\n",
                "������" : "�Ҹ���ǰ�����̹����ⲿ���򣬵��ǲ����⴫���˩xM�����ܰ����ҵ����Ҿͽ��㺮���ơ�\n",
                "����" : "�Ʊ������������ʧ���˵�����ǰ������ʫ�ļ���������ܰ����ҵ����Ҿͽ��㺮���ơ�\n",
                "�����޺�" : "������ ? .. ���������ţ�����H���ڶ�ʮ��ǰ�����򽭺���\n      �����书�����������ԴӰ����ҵ������£�����ʧ���֡�\n      ����������Ӧ�ø��������������\n",
                "�����" : (: linhwi :),
                "����ʯ" : (: pearl :),
                "�������" : "���˸�����������������о���γ��֮�ţ��������Ī��Ĳ������������ơ�������������\n",
                "��������" : "������ƽϲ���ύ��֪ʶ�����ǻ۵���ʿ����������ΪĪ��֮����\n",
           ]));

        setup();
        carry_object(SNOW_OBJ"dragon-sword");
        carry_object(SNOW_OBJ"tenpen");
        carry_object(SNOW_OBJ"blue-cloth")->wear();

}
int get_power(object ob)
{
        int power;
        string skill_type;
        if(!ob) return 1;
        skill_type = ob->query_temp("skill_type");
        if( skill_type == "unarmed" )
                power = ob->query_skill(skill_type);
        else
                power = ob->query_skill(skill_type) * 2;
        power += ob->query_skill("dodge");
        power += ob->query_skill("parry");
        power += ob->query_temp("apply/damage");
        power += ob->query_temp("apply/armor");
        power += ob->query_temp("apply/attack");
        power += ob->query_temp("apply/dodge");
        power += ob->query("force") * ob->query("force_factor") / 100;
        power += ob->query("combat_exp") / 500;
        return power * ( ob->query("kee") / ob->query("max_kee") );
}
string chat_msg()
{
        return "";
}
string combat_msg()
{
        object ob = offensive_target(this_object());
        int my_power,ob_power;
        if( is_killing() && query("kee") < 120 ) {
                command("say ��������̫���� ! ѽ ����������");
                command("cast sword");
                command("cast pen");
                return "";
        }
        my_power = get_power(this_object());
        ob_power = get_power(this_player());
        if( ob_power > my_power * 3 / 2 ) {
                command("say �������վ�տ������ĳ��� !");
                if( !this_player()->query_temp("weapon") &&
                    !this_player()->query_temp("secondary_weapon") ) {
                        command("say ��Ȼ��ˣ�����Ҫ��ȫ���� !");
                        command("wield all");
                        return "";
                }
                return "";
        }
        if( ob_power < my_power / 2 ) {
                if( this_player()->query_temp("weapon") ) {
                        command("say �п�����Ϊʤ����Ӣ����ΪҲ !");
                        command("unwield sword");
                        command("unwield pen");
                        return "";
                }
        }
        if( random(3) == 0 ) {
                command("say ���� ! �����ҵ������ʽ !");
                command("unwield sword");
                command("wield pen");
                return "";
        }
        if( random(3) == 0 ) {
                command("say �������� ������");
                command("unwield pen");
                command("wield sword");
                return "";
        }
        return "";
}
int accept_fight(object who)
{
        if( !is_fighting() )
        {
                command("say ���¼�Ȼ����Ȥ��̣������Ե����㡣");
                return 1;
        }
        command("say �����������˱����У���Ҫ�ֽ̣������Ժ�");
        return 0;
}
int accept_kill(object who)
{
        if( is_fighting() || is_killing() )
        {
                command("say �ж�Ϊʤ�Ǿ�����Ϊ !");
                command("say Ҳ�� ... �ֲ������� !");
                command("wield all");
                return 1;
        }
        command("say ���º������������ ?");
        command("wield pen");
        return 1;
}
/* �����������bug.���ٻ���.�õ�..
void die()
{
        object killer = query_temp("last_damage_from");
        killer->set("quests/kill-dugur",1);
        message_vision(HIB + @LONG
����ǧ��һ��֮�ʣ�ͻȻ�Ĵܳ�һ�������ˣ�
�����˽������ƿ��������ڼ��ϣ�$n����ǰȥ
��ֹ���������˱Ʋ����ѣ�ֻ��ʹ�����У�ֻ
�������˷�������һ�ƴ���$n���ϣ�ֻ������
������һ����$n�����˷��˳�ȥ��
LONG + NOR,
        this_object(),killer);
        killer->set("kee",1);
        killer->set("force",0);
        COMBAT_D->report_status(killer);
        load_object("/open/snow/room/ducu_live3");
        load_object("/open/snow/room/ducu_live1");
        killer->move("/open/snow/room/ducu_live3");
        killer->move("/open/snow/room/ducu_live1");
        message_vision(HIR "$N����һ����Ѫ���ƺ��ܵ��˼���������ˡ�\n" NOR,killer);
        message_vision("�����˱��Ŷ�����һ���������ʧ�����ˡ�\n",this_object());
        destruct(this_object());
}
*/
