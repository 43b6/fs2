// ��д������ĵ�СŮ��..:)/open/center/npc/vendor.c 
#include "/open/open.h" 
 
// inherit F_VENDOR; 
 
void create() 
{ 
        set_name("��ҩ������", ({ "medical boy", "boy" }) ); 
        set("gender", "����" ); 
        set("age", 18); 
        set("long", @LONG 
����һ��Ƥ����ڵ����꣬�����ǽ�ʵ�ļ��⣬���Ѳ³���ƽ��һ������ɽ 
�в�ҩ�� 
LONG); 
        set("attitude", "friendly"); 
        //������һ�б�ʾ�ƺ�
        set("rank_info/respect", "С�ֵ�"); 
        set("combat_exp", 4000); 
        //���±�ʾ��λnpc��Ҫ���Ķ���
        // set("vendor_goods", ({
        //    CENTER_OBJ"torch", 
        //    CENTER_OBJ"torch",                   
        //    CENTER_OBJ"map", 
        //  }) ); 
        //   greeting_msg���ڵ����������������ʱ��npc��Ҫ˵�Ļ�
/*      set("greeting_msg", ({ 
            "��ҩ��˵��: ���ˣ�ʦ�������Ĳ�ҩҪ�ǲ��Ͻ��ҵ��Ļ�����ȥһ�����\
n", 
            "��˵����ɽ��������һ�ֳ������������ٵġ����ɲݡ���\n", 
                             }) ); 
*/
        set("chat_chance" , 5);
        set("chat_msg" , ({
           (: this_object() , "random_move" :),
           "��ҩ��˵������������й����û��ʦ��������һ������ɽ��ҩ...\n",
           "��ҩ��˵��������ʦ�������Ĳ�ҩ��������ҵ��Ļ�����ȥһ����Ҫ���\n
",
           "��ҩ��˵������˵��ɽ��������һ�ֽ��������ɲݡ�����ҩ��\n",
                          }) );
        set("inquiry" , ([
            "ҩ��"    :    "ʦ��Ҫ���ҵ�ҩ����ʵ�ܼ򵥣��������������Ƚϲ����
����һ�궼û�ɵ���\n",
            "��ҩ"    :    "ʦ��Ҫ���ҵ�ҩ����ʵ�ܼ򵥣��������������Ƚϲ����
����һ�궼û�ɵ���\n",
            "���ɲ�"  :    "��˵����ҩ�ݳ���֮�󣬶�����������һ���̶ȵİ�����\n
",
            "ʦ��"    :    "��ʦ���������ˣ���˵����ǰ��һ����ҽ�أ�",
                         ]) );
        setup(); 
        //������һ�б�ʾ��λnpc��ҪЯ���Ķ���
        carry_object(CENTER_OBJ"cloth1")->wear(); 
} 
/* 
int accept_object(object who, object ob) 
{ 

object me; 
       me = this_object(); 

    if (ob->value() == 0) 
  int accept_object(object who, object ob) 
  { 
  object me; 
         me = this_object(); 
    if (ob->value() == 0) 
   message_vision
     ("$N˵��: $n���ǳ���л�㣬�����ұȽ�ϣ���ܿ���ҵ�ʦ��Ҫ�Ķ���!\n", 
                     me, who); 
    else 
   message_vision
     ("$N˵��: лл�㣬$n���һ�ȥ���Ը�ʦ�������ˡ�\n", 
                     me, who); 
    message_vision("����˵��: �����ڻ��벻����Ҫ��ôлл�㣬�����뵽һ��������
��\n", 
                     me, who); 
 
  return 1; 
}
*/ 
