// Room: /d/heimuya/road4.c
// Last Modified by winder on Apr. 10 2000
inherit ROOM;
void create()
{
        set("short", "����·");
	set("long", @LONG
������һ������·�ϡ�������ɽ���ؽ磬�����ͽ���ӱ��ˡ�����
���ﲻ��̫ƽʱ�ڣ����ǿ���߰ɡ�
LONG );
        set("outdoors", "heimuya");
        set("exits", ([
                "northeast" : __DIR__"road1",
                "southwest" : __DIR__"dukou1",
        ]));
        set("no_clean_up", 0);
	set("coor/x", -3030);
	set("coor/y", 4020);
	set("coor/z", 0);
	setup();
        replace_program(ROOM);
}