//book.c

inherit ITEM;

void create()
{
set_name("�����鼮",({"secret_book","book"}));
        set_weight(100);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long",
"��˵��ʼ��,Ϊ�˱�����λ,�ص����츣�������ȡ��������ҩ��
 �Ȿ��������츣�Ӷ������ȡ������,�����Ƴ������ϵ�����\��Ч\.
 �����\��\��\��\��\(read secret_book).\n");
                set("value",0);
                set("material", "paper");
        }
        setup();
}

void init()
{
add_action("do_read","read");
}

int do_read(string str)
{
  object me=this_player();
  if(str!="secret_book") {
  tell_object(me,"�����ʲô?\n");
  return 1;
                       }
    else if(me->query("functions/young/level") >= 1){
      tell_object(me,"���Ѿ�ѧ���ˡ�\n");
        return 1;

                       }
  else if (!me->query("secret_book",1)){
  tell_object(me,"�㲢û��ɱ������,�޷��Ķ����鼮.\n");
  return 1;


}
  else {
 tell_object(me,"���������ϵĿھ�����һ�飬����е������ޱ�,���ϵ������������ࡣ\n�������д�ţ����Ϸ�ͯ���÷���perform literate.young\n");
  me->delete("secret_book");
  me->set("functions/young/level",1);
  return 0;
       }
}
