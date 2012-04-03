#include <ansi.h>
#include </open/open.h>
inherit NPC;
void do_wield();
string do_linpo();
void create()
{
        set_name("����",({"duan yu","duan","yu"}));
        set("title",HBMAG+HIC"������ʥ"NOR);
        set("long","�����ǵ�һλ���������ڻ��ͨ����,�����������Ѵ�¯�����
�ز�\n");
        set("gender","����");
        set("combat_exp", 8000000);
        set("attitude","friendly");
        set("bellicosity",3000);
        set("family/family_name","�μ�");
        set("age",28);
        set("str", 44);
        set("cor", 44);
        set("cps", 45);
        set("per", 30);
        set("int", 42);
        set("food",1000);
        set("water",1000);
        set("force",100000);
        set("max_force",50000);
        set("kee",40000);
        set("max_kee",40000);
        set("gin",40000);
        set("max_gin",40000);
        set("sen",40000);
        set("max_sen",40000);
        set("chat_chance", 5);
        set("chat_msg", ({
        "������: ��!�ò�����������ľ��У�ȴ�Ҳ������ˡ�\n",
        "������: �������ڵ��������̫���ˡ�\n",
        }));
        set("inquiry", ([
        "�貨΢��" : "���������Ż����ص���������ѧ���Ĳ������ڴ򲻹����ˣ�Ҫ���ܵ�ʱ����������!!\n",
        "����" : "��Ҫѧ�貨΢��???�����ѧ�Ļ�ȥ�Ҷ��ưɣ����а��貨΢�������Ÿ�����\n",
        "����" : (: do_linpo :),
        ]));
        set_skill("force",400);
        set_skill("unarmed",120);
        set_skill("sunforce",230);
        set_skill("linpo-steps",100);
        set_skill("six-fingers",125);
        set_skill("parry",100);
        set_skill("dodge",100);
        set_skill("move",100);
        set_skill("stabber",120);
        set_skill("literate",150);
        map_skill("force","sunforce");
        map_skill("dodge","linpo-steps");
        map_skill("move","linpo-steps");
        map_skill("parry","six-fingers");
        map_skill("unarmed","six-fingers");
        map_skill("stabber","six-fingers");
        set("force_factor",25);
        set("marks/six_sp",3);
        set("marks/six-fingers",3);
        set("marks/sun-finger",1);
        set("marks/linpo-steps",1);
        set("marks/handwriting",1);
        set_temp("apply/armor",300);
        set_temp("apply/stagger",50);
        set_temp("apply/defense",100);
        set_temp("apply/damage",120);
        set("mpower",3);
        set("six_spsp",1);
        set("env/quick_fan","YES");
        set("chat_chance_combat", 100);
        set("chat_msg_combat", ({
                (: perform_action("stabber.handwriting") :),
                (: exert_function("threeforce") :),
        }));
        set("functions/handwriting/level",150);
        set("functions/threeforce/level",100);

        setup();
        carry_object(PING_OBJ"neck0")->wear();
        carry_object(PING_OBJ"cloud_fan");
        add_money("gold",100);
}
void init()
{
    call_out("do_wield",1);
}
void do_wield()
{
    command("wield all");
}
string do_linpo()
{
    object ppl;

    ppl=this_player();

    if(ppl->query("family/family_name") != "�μ�")
      return "��?�������ܵ��������??";
    if(ppl->query("marks/ask_linpo")!=4)
      return "����!�׾�����֮���ڣ��ɲ�����������Ϳ���˵���ġ�";
    if(ppl->query("int") > 33) ppl->set_temp("teach_time",2);
    else ppl->set_temp("teach_time",4);
    call_out("teach_step1",4,ppl);
    return HIY"ԭ������Ҫѧ���ܵļ��ɰ���������û���⣬�����ϱ���һ�θ��㿴����������!!"NOR;
}
int teach_step1(object ppl)
{
    if(!ppl) return 1;
    if(environment(this_object()) != environment(ppl)) return 1;
    message_vision(HIC"ֻ��$N��ʼ��$n"HIC"��ǰ������ȥ��$n"HIC"��Ȼ�۾�һ����$N������!!\n"NOR,this_object(),ppl);
    call_out("teach_step2",2,ppl);
    return 1;
}
int teach_step2(object ppl)
{
    if(!ppl) return 1;
    if(environment(this_object()) != environment(ppl)) return 1;
    command("say ��Σ���������???");
    call_out("teach_step3",2,ppl);
    return 1;
}
int teach_step3(object ppl)
{
    if(!ppl) return 1;
    if(environment(this_object()) != environment(ppl)) return 1;
    ppl->add_temp("teach_time",-1);
    if(ppl->query_temp("teach_time") > 0){
      ppl->do_command("shake");
      call_out("teach_step4",2,ppl);
      return 1;
    }
    else
    {
      ppl->do_command("nod");
      call_out("teach_step5",2,ppl);
      return 1;
    }
}
int teach_step4(object ppl)
{
    if(!ppl) return 1;
    if(environment(this_object()) != environment(ppl)) return 1;
    command("say ����������û��ϵ��������һ�Σ��������!!");
    call_out("teach_step1",2,ppl);
    return 1;
}
int teach_step5(object ppl)
{
    if(!ppl) return 1;
    if(environment(this_object()) != environment(ppl)) return 1;
    message_vision(HIG"ֻ��$N"HIG"��ʼ��$n��ǰ������ȥ��$n��Ȼ�۾�һ����$N"HIG"�Ƶ���$n�ı���!!\n",ppl,this_object());
    call_out("end_step",2,ppl);
    return 1;
}
int end_step(object ppl)
{
    if(!ppl) return 1;
    if(environment(this_object()) != environment(ppl)) return 1;
    command("haha");
    command("spank "+ppl->query("id"));
    command("say �ɵúã��Ժ󼸺�û�˿����κε�������!!");
    command("say ����������Ҫע���!!");
    command("say �ú������˶࣬����ǧ��Ҫһ�Զ࣬��ʱ���ܲ��������ľ�������");
    command("say �ܽ�������ͬ�����ܵ�·�����ˣ�Ҳ�ͼ����������ܵĻ���");
    command("say һ��Ҫע�������㣬֪����?");
    ppl->set("marks/linpo-steps",1);
    ppl->delete("marks/ask_linpo");
    return 1;
}
void unconcious()
{
    message_vision("
$N��Ȼ����"HIC"���貨΢����"NOR"��Ҫּ���ڣ��Ų�����"HIY"�����޳�����Σ��������ֹ���ڣ�
����������"NOR",��ʱһƬ��Ӱ�׷ɣ��õ���ͷ���ۻ�\n",this_object());
    message_vision(HIC"$N��������������뿪����!!\n"NOR,this_object());
    destruct(this_object());
}
void die()
{
    message_vision("
$N����Ĭ���"HIC"���貨΢����"NOR"����ʮ���Բ������ԡ����ġ���ʼ�������ڡ�
 �����ȼá��������ˡ�������һ��Ȧ������������������˳����\�ѵ��˵ľ�����\n"NOR,this_object());
    message_vision(HIC"$N��������������뿪����!!\n"NOR,this_object());
    destruct(this_object());
}
