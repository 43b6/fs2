#include <weapon.h>
 inherit ITEM;

void create()
{
   set_name("�ƽ����",({"dragon" ,"golden dragon",}));

   set("unit","ֻ");
  set("no_sac",1);
set("long","\n�Ѿ�����һϢ�Ĵ�˵������ ,�����������
���������������(free dragon) ,�����û�˸�˵!!\n\n");
  set("no_get",1);                    
        setup();
}

