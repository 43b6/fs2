// beggar.c
// first written by grand 9/30/1995
// fixed by wade
// become guild master by Dico 07/10/1999

inherit NPC;
inherit F_MASTER;

void create()
{
        set_name("��ؤ", ({ "beggar" }) );
        set("race", "����");
        set("age", 23);
        set("long",@LONG
  һ���������������ؤ����������۹⿴���㡣
������������˵�ɱ�����أ������������������
���۽ǵ���⿴���������а˸�С���������ƺ���
ʲô��Ҫ�����壬������һʱ�벻����������
LONG);
        set("str", 24);
        set("cor", 26);
        set("gender","����");
        set("class","beggar");
        set("combat_exp",1000000);
        set("attitude","heroism");
        set("max_force",3000);
        set("force",3000);
        set("max_kee",3000);
        set("kee",3000);
        set_skill("array",70);
        set_skill("move",60);
        set_skill("force",90);
        set_skill("dodge",60);
        set_skill("parry",70);
        set_skill("unarmed",120);
        set_skill("literate",30);

        set("chat_chance", 15);
        set("chat_msg", ({
                "��ؤ���������������ӡ�\n",
                "��ؤ��ס��Ľţ����ֶ����ԡ�\n",
                "��ؤ�����������\n" }) );
        set("inquiry", ([
        "thief" : "����һЩǮ, �Ҿ�͵͵˵��������",
        "����" : "���֣������������Ȼ�㿴�������Ҿ͸�����ɡ�\n����ؤ�����������У������(JOIN)�Ļ�Ҫ�Ͽ�ม�",
        "С����" : "���֣������������Ȼ�㿴�������Ҿ͸�����ɡ�\n����ؤ�����������У������(JOIN)�Ļ�Ҫ�Ͽ�ม�",
        "����" : "���֣������������Ȼ�㿴�������Ҿ͸�����ɡ�\n����ؤ�����������У������(JOIN)�Ļ�Ҫ�Ͽ�ม�",
        ]));
        set("combat_exp",256);
        set_temp("apply/attack", 10);
        set_temp("apply/armor", 3);

        setup();
carry_object("/obj/cloth")->wear();
}

void reset()
{
  delete("accept_object");
}

// ���ܴ����ʶ���ĳЩ��Ҳ���, ���޷�ѧ��, �ĳ�һ��ֻ��һ�λ���
// reset ��ʱ���������������ʱ���������, fixed by wade 12/13/1995
int accept_object(object who, object ob)
{
        int b, value;

        if (!query("accept_object/"+who->query("id"))) {
          b = who->query("bellicosity"); 
          if( (value=ob->value())  && b>0 ) {
                value = value/10;
                if (value < 1) value = 1;
                b = b - value;
                if (b < 0) b = 0;
                who->set("bellicosity", b); 
                add("accept_object/"+who->query("id"), 1);
                write("���������ϴ����һЩ.\n");
          }
        }
        else
          say ("лл! лл!\n");
        destruct(ob);
        return 1;
}

void init()
{
 add_action("do_join","join");
}

int do_join()
{
 if(this_player()->query("class"))
  return notify_fail("���Ѿ��������������ˡ�\n");
 this_player()->set("class","beggar");
 message("system","\n�㿴��"+this_player()->name()+"�����ϵ��·�˹���������õģ�\n"
 "���Լ�������һ����ؤһ�����治�������Դ�������ʲô��\n\n",users());
 return 1;
}
