from kivy.app import App
from kivy.uix.screenmanager import ScreenManager, Screen
from kivy.uix.button import Button
from kivy.uix.label import Label
from kivy.uix.floatlayout import FloatLayout
import os
import time
# First Screen
class FirstScreen(Screen):
    def __init__(self, **kwargs):
        super(FirstScreen, self).__init__(**kwargs)
        layout = FloatLayout()

        self.label = Label(text="For shutdown your device press Shutdown.", font_size='18sp',size_hint=(.6, .2), pos_hint={"center_x": 0.5, "center_y": 0.8})
        layout.add_widget(self.label)

        shut_button = Button(text="Shutdown", size_hint=(.2, .1),
                             pos_hint={"right": 0.6, "y": 0.4})  
        shut_button.bind(on_press=self.go_to_shut)
        layout.add_widget(shut_button)

        next_button = Button(text="Next", size_hint=(.2, .1),
                             pos_hint={"right": 0.98, "y": 0.02})  # Bottom-right corner
        next_button.bind(on_press=self.go_to_next)
        layout.add_widget(next_button)

        self.add_widget(layout)

    def go_to_next(self, instance):
        self.manager.current = "second"
    def go_to_shut(self, instance):
        self.label.text = "Your all program close and \nYour device will shutdown in next 10 seconds..."
        os.system("shutdown /s /t 10")

# Second screen
class SecondScreen(Screen):
    def __init__(self, **kwargs):
        super(SecondScreen, self).__init__(**kwargs)
        layout = FloatLayout()

        self.label = Label(text="For restart your device press Restart.",font_size='18sp', size_hint=(.6, .2), pos_hint={"center_x": 0.5, "center_y": 0.8})
        layout.add_widget(self.label)

        next_button = Button(text="Next", size_hint=(.2, .1),
                             pos_hint={"right": 0.98, "y": 0.02})  # Bottom-right corner
        next_button.bind(on_press=self.go_to_next)
        layout.add_widget(next_button)

        rest_button = Button(text="Restart", size_hint=(.2, .1),
                             pos_hint={"right": 0.6, "y": 0.4})  
        rest_button.bind(on_press=self.go_to_rest)
        layout.add_widget(rest_button)

        prev_button = Button(text="Previous", size_hint=(.2, .1),
                             pos_hint={"left": 0.95, "y": 0.02})  # Bottom-left corner
        prev_button.bind(on_press=self.go_to_prev)
        layout.add_widget(prev_button)

        self.add_widget(layout)
    def go_to_rest(self, instance):
        self.label.text = "Your device will restart in next 10 seconds..."
        os.system("shutdown /r /t 10")
    def go_to_prev(self, instance):
        self.manager.current = "first"
    def go_to_next(self, instance):
        self.manager.current = "third"


# Third screen
class ThirdScreen(Screen):
    def __init__(self, **kwargs):
        super(ThirdScreen, self).__init__(**kwargs)
        layout = FloatLayout()

        self.label = Label(text="For logout your device press Logout.",font_size='18sp', size_hint=(.6, .2), pos_hint={"center_x": 0.5, "center_y": 0.8})
        layout.add_widget(self.label)

        next_button = Button(text="Next", size_hint=(.2, .1),
                             pos_hint={"right": 0.98, "y": 0.02})  # Bottom-right corner
        next_button.bind(on_press=self.go_to_next)
        layout.add_widget(next_button)

        prev_button = Button(text="Previous", size_hint=(.2, .1),
                             pos_hint={"left": 0.95, "y": 0.02})  # Bottom-left corner
        prev_button.bind(on_press=self.go_to_prev)
        layout.add_widget(prev_button)

        logout_button = Button(text="Logout", size_hint=(.2, .1),
                             pos_hint={"right": 0.6, "y": 0.4})  
        logout_button.bind(on_press=self.go_to_lg)
        layout.add_widget(logout_button)

        self.add_widget(layout)
    def go_to_lg(self, instance):
        self.label.text = "Your device will logout in next 10 seconds..."
        time.sleep(10)
        os.system("shutdown -l")

    def go_to_prev(self, instance):
        self.manager.current = "second"

    def go_to_next(self, instance):
        self.manager.current = "fourth"


# Fourth screen
class FourthScreen(Screen):
    def __init__(self, **kwargs):
        super(FourthScreen, self).__init__(**kwargs)
        layout = FloatLayout()

        self.label = Label(text="For sleep your device press Sleep.",font_size='18sp', size_hint=(.6, .2), pos_hint={"center_x": 0.5, "center_y": 0.8})
        layout.add_widget(self.label)

        self.add_widget(layout)
        prev_button = Button(text="Previous", size_hint=(.2, .1),
                             pos_hint={"left": 0.95, "y": 0.02})  # Bottom-left corner
        prev_button.bind(on_press=self.go_to_prev)
        layout.add_widget(prev_button)

        sleep_button = Button(text="Sleep", size_hint=(.2, .1),
                             pos_hint={"right": 0.6, "y": 0.4})  
        sleep_button.bind(on_press=self.go_to_sleep)
        layout.add_widget(sleep_button)

    def go_to_sleep(self, instance):
        self.label.text = "Your device will sleep in next 10 seconds..."
        time.sleep(10)
        os.system("rundll32.exe powrprof.dll,SetSuspendState 0,1,0") 
    def go_to_prev(self, instance):
        self.manager.current = "third"


# App and ScreenManager
class MyApp(App):
    def build(self):
        sm = ScreenManager()
        sm.add_widget(FirstScreen(name='first'))
        sm.add_widget(SecondScreen(name='second'))
        sm.add_widget(ThirdScreen(name='third'))
        sm.add_widget(FourthScreen(name='fourth'))
        return sm

if __name__ == '__main__':
    MyApp().run()
