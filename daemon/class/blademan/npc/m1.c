inherit NPC;

string do_ask (object me);

void create()
{
         set_name("��޶�",({"girl"}));
        set("long", "
���Ӻ�������ڻ�������������������ͷ�ϰ�������С���ӡ� 
");
        
        set("age", 15);
        set("int", 30);
        set("cps", 24);
        set("str", 23);
        set("cor", 22);
        set("spi", 29);
        set("con", 26);
        set("kar", 27);
        set("per", 29);
    set("combat_exp",2000);
    set("force",100);
	set("max_force",500);
      set_skill("dodge", 20);
         set_skill("parry", 20);
      set_skill("unarmed",10);


        set( "gender", "Ů��");


        set("limbs", ({ "ͷ��",  "˫��", "˫��", "����" ,"����","����"}) );
     
        set("attitude", "peaceful");
        set("chat_chance", 10);
        set("chat_msg", ({
           "��޶�С����˵:�Ҽҹ��ﲻ�����...\n",
           "��޶�˵��:�Ҽҹ�����Һܶණ���..\n",
        }) );
         set("inquiry",([
        "�������" : "������֪ , ������������ , �������콣�������� !\n",
     "���콣" : "�����ڹ������а�,�Ҳ�֪�������Ǩ�... ?\n",
      "������"   : "��������лѷ���ϰ�, ��ȥ����Ҫ !\n",
          "��ڣ" : "�� ,������֮�� ,���в��ٱ���, ����û�����ӵ���
   ���޷��õ���..\n",
      "����" : "��, �����ҿ��µ�,�Ҳ���ȥ�� \n",
         "�����" : "�����Ҳ��̫���, �Ҽҹ�����֪����..\n",
         "��˵�" :"�Ҽҹ���˵���ڸߴ����ͩ���Ͼ�����������..\n",
        ]));
    setup ();
 carry_object("/daemon/class/blademan/obj/topknot.c")->wear();
    }
void greeting(object ob)
{

           if( ob->query("gender")=="����")
        {
          command("say �ۣ���Ҫ���߶��...!");
   }
           if( ob->query("gender")=="Ů��")
   {
           command("say ���ð�������....^_^");
  }  }
