// �μ� ����
#include </open/open.h>
inherit NPC;
string do_linpo();
void create()
{
        set_name("����",({"duan chi","chi","duan"}));
        set("long","�����Ƕ��Ƶ�����, �Ƕ��ƶ�ʮ��ǰ��ɽ���Լ�����Ӥ��, ��Ϊ��"+
"���Ǵ������, ���Ա�ȡ��Ϊ���ߡ�\n");
        set("gender","����");
        set("class","scholar");
        set("attitude","heroism");
        set("chat_chance", 5);
        set("chat_msg", ({
        "����˵: ��....�貨΢���Ĳ������Ǹ���, �����ͷ�����ˡ�\n",
        "����˵: �常���ҵ���������ǹ���, ��ͷ�Ĳ�������������\n"
        }));
        set("age",20);
        set("inquiry", ([
        "thief" : "ʲô��������, û��������ר�������貨΢������",
        "scar" : "��..����, û������������",
        "sad_story" : "�常���£���..�����..��",
        "�貨΢������" : (: do_linpo :),
        ]));
        set("force",500);
        set("max_force",500);
        set("combat_exp", 10000);
        set_skill("force",30);
        set_skill("dodge", 5);
        set_skill("parry", 5);
        set_skill("unarmed",10);
        set_skill("sunforce",30);
        set_skill("linpo-steps",5);
        set_skill("six-fingers",40);
        map_skill("force","sunforce");
        map_skill("dodge","linpo-steps");
        map_skill("move","linpo-steps");
        map_skill("parry","six-fingers");
        map_skill("unarmed","six-fingers");
        set_temp("apply/damage",40);
        set("force_factor", 5);
        setup();
        carry_object(PING_OBJ"linpo_book");
        carry_object(PING_OBJ"neck1")->wear();
        add_money("silver",1);
        create_family("�μ�",11,"����");
}

string do_linpo()
{
        object me=this_player();

        if(me->query("family/family_name")!="�μ�") return 0;
        if(me->query("marks/ask_linpo")!=2) return 0;

        if(present("book",this_object())){
        me->set("marks/ask_linpo",3);
        return "����???�������������õ��Ȿ?";
        }
        else{
        return 0;
        }
}
