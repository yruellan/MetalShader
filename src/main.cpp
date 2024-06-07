#include "viewDelegate.cpp"
#include "appDelegate.cpp"
#include "renderer.cpp"


int main( int argc, char* argv[] ){
    NS::AutoreleasePool* pAutoreleasePool = NS::AutoreleasePool::alloc()->init();

    MyAppDelegate del;

    NS::Application* app = NS::Application::sharedApplication();
    app->setDelegate( &del );
    app->run();

    pAutoreleasePool->release();

    return 0;
}
