inherit NPC;
void create()
{
        set_name("������",({"duan zheng-chun","duan"}));
        set("gender","����");
        set("age",45);
        set("class","scholar");
        set("str",40);
        set("long","˧���������� ,����С���� ,һ���������ŵ����� .\n");
        set("combat_exp",500000);
        set_skill("stabber",90);
        set_skill("force",70);
        set_skill("move",40);
        set("force",3000);
        set("max_force",3000);
        set("kee",2000);
        set("max_kee",2000);
          set_skill("literate",100);
        set_skill("parry",40);
        set_skill("dodge",40);
        set_skill("six-fingers",90);
        set_skill("linpo-steps",80);
        set_skill("sunforce",70);       
        map_skill("stabber","six-fingers");
        map_skill("dodge","linpo-steps");
        map_skill("move","linpo-steps");
        map_skill("parry","six-fingers");
        map_skill("force","sunforce");
        set("force_factor",10);
        set("functions/handwriting/level",50);
        set("chat_chance_combat",60);
        set("chat_msg_combat", ({
                (: perform_action("stabber.handwriting") :),
        }));
        set("chat_chance",10);
        set("chat_msg",({
                "����������������ȥ ,��ɫ����Ť��.\n",
                "������˵�� : ��� !����ҪŮ��� ,������Ҳ�а� :~~\n"
                }));

        set("inquiry",([
        "ׯ����" : "��˵С���ᰡ ,�� ,һ��С���� ,���Ҿܾ��� ,��һ��Ҫ�һ��� ,����
�Ѹ�����Ȼ��� .....\n",
        "����" : "��Ҫ !ɶ�¶������� ,���ⲻ�� ,�������һ��С���᷼��Ĵ������ !\n",
        "��ҪŮ����" : "�� ,�� :P~~~~~\n",
        ]));
        setup();
        create_family("�μ�",8,"����");
        add_money("gold",10);
}

int accept_object(object me,object ob)
{
  if(ob->query("id")=="playboy")
       {
        command("smile "+me->query("id"));
        if(me->query("gender")=="����")
        command("say С�ֵ� ,����лл�ㆪ !");
        if(me->query("gender")=="Ů��")
        command("say С���� ,�� .....����ô���������� ,����û�� !");
        me->set_temp("playboy",1);
        command("say Ϊ�˱����� ,���������ȥ�� !");
        tell_object(me,"�� !���Խ�ȥ�� !\n");
        }
  return 1;
}

